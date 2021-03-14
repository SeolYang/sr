#pragma once
#include <Core/CoreMinimal.h>

namespace sr
{
   class VertexShader;
   class PixelShader;
   class Viewport;
   class DepthStencilBuffer;
   class RenderBuffer;
   class Mesh;
   /** Draw -> Vertex Shader -> Rasterization -> Pixel Shader -> Output */
   class Pipeline
   {
   public:
      void ResetPipeline();

      void SetVertexShader(VertexShader* vs) { m_vertexShader = vs; }
      VertexShader* GetVertexShader() const { return m_vertexShader; }
      void SetPixelShader(PixelShader* ps) { m_pixelShader = ps; }
      PixelShader* GetPixelShader() const { return m_pixelShader; }

      void SetViewport(Viewport* vp) { m_viewport = vp; }

      void Draw(const std::optional<Mesh*>& mesh);

   protected:
      void Rasterization();

   private:
      VertexShader* m_vertexShader = nullptr;
      PixelShader* m_pixelShader = nullptr;
      DepthStencilBuffer* m_depthStencilBuffer = nullptr;
      Viewport* m_viewport = nullptr;

   };
}