#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#define NOMINMAX
#define WIN32_LEAN_AND_MEAN
#include <Windows.h>
#undef GetPrivateProfileString
#undef GetPrivateProfileInt

#include <cstdint>
#include <string>
#include <string_view>
#include <vector>
#include <array>
#include <optional>
#include <unordered_map>
#include <algorithm>
#include <functional>
