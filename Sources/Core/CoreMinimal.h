#pragma once
#pragma warning(disable : 4251)
#pragma warning(disable : 4996)
#pragma warning(default : 4265)
#pragma warning(push, 0)
#define NOMINMAX

#include <vector>
#include <queue>
#include <stack>
#include <map>
#include <unordered_map>
#include <tuple>
#include <optional>
#include <algorithm>

#include <memory>
#include <iostream>
#include <fstream>
#include <filesystem>
#include <chrono>
#include <string>
#include <string_view>

#define WIN32_MEAN_AND_LEAN
#include <Windows.h>

#include <json/json.hpp>
#include <icecream/icecream.hpp>
#include <glm/glm.hpp>
#include <stb_image/stb_image.h>
#include <stb_image/stb_image_write.h>
#include <tinygltf/tiny_gltf.h>

#pragma  warning(pop)

namespace sr
{
   using json = nlohmann::json;

   template <typename T>
   void SafeRelease(T& target)
   {
      if (target != nullptr)
      {
         target->Release();
         target = nullptr;
      }
   }

   template <typename T>
   void SafeDelete(T& target)
   {
      if (target != nullptr)
      {
         delete target;
         target = nullptr;
      }
   }

   template <typename T>
   void SafeArrayDelete(T& target)
   {
      if (target != nullptr)
      {
         delete[] target;
         target = nullptr;
      }
   }

   template <typename T>
   void SafeFree(T& target)
   {
      if (target != nullptr)
      {
         std::free(target);
         target = nullptr;
      }
   }
}