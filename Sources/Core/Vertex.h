#pragma once
#include <Core/CoreMinimal.h>

namespace sr
{
   struct Vertex
   {
   public:
      glm::vec4 Position;
      glm::vec2 TexCoords;
      glm::vec3 Normal;
      glm::vec4 Tangent;
      glm::vec4 BiTangent;

   };
}