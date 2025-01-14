/* Copyright (c) 2021 PaddlePaddle Authors. All Rights Reserved.

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License. */

#ifdef PADDLE_WITH_XPU

#include "paddle/fluid/framework/op_registry.h"
#include "paddle/fluid/operators/beam_search_op.h"

namespace ops = paddle::operators;
using XPUCtx = paddle::platform::XPUDeviceContext;

REGISTER_OP_XPU_KERNEL(beam_search,
                       ops::BeamSearchOpKernel<float, XPUCtx>,
                       ops::BeamSearchOpKernel<double, XPUCtx>,
                       ops::BeamSearchOpKernel<int, XPUCtx>,
                       ops::BeamSearchOpKernel<int64_t, XPUCtx>);
#endif
