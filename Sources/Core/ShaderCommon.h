#pragma once
#include <Core/CoreMinimal.h>

namespace sr
{
   struct VertextShaderInput
   {
      glm::vec4 PositionLS;
      glm::vec2 TexCoords;
      glm::vec3 NormalLS;
      glm::vec4 TangentLS;
      glm::vec4 BiTangentLS;

   };

   struct VertexShaderOutput
   {
      glm::vec4 PositionCS;
      glm::vec2 TexCoords;
      glm::vec3 NormalWS;
      glm::vec3 PositionWS;
   };

   struct PixelShaderInput
   {
      glm::vec4 PositionSS;
      glm::vec2 TexCoords;
      glm::vec3 NormalWS;
      glm::vec3 PositionWS;
   };
}