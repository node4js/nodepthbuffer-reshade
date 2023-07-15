/*
 * Copyright (C) 2023 Patrick Mours
 * SPDX-License-Identifier: BSD-3-Clause
 */

#pragma once

#if RESHADE_ADDON && !RESHADE_ADDON_LITE

#include <d3d11_1.h>

void STDMETHODCALLTYPE ID3D11Resource_GetDevice(ID3D11Resource *pResource, ID3D11Device **ppDevice);

#endif