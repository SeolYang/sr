#pragma once
#include <Core/CoreMinimal.h>
#include <Core/Vertex.h>

namespace sr
{
   class Triangle
   {
   public:
      Triangle(const Vertex& p0, const Vertex& p1, const Vertex& p2) :
         m_vertices({ p0, p1, p2 })
      {
      }

      Triangle(const std::array<Vertex, 3>& vertices) :
         m_vertices(vertices)
      {
      }

      Triangle(std::array<Vertex, 3>&& vertices) :
         m_vertices(vertices)
      {
      }

      float Area() const
      {
         glm::vec3 u(m_vertices[1].Position - m_vertices[0].Position);
         glm::vec3 v(m_vertices[2].Position - m_vertices[0].Position);
         return (glm::cross(u, v).length() * 0.5f);
      }

      glm::vec3 Normal() const
      {
         glm::vec3 u(m_vertices[1].Position - m_vertices[0].Position);
         glm::vec3 v(m_vertices[2].Position - m_vertices[0].Position);
         return glm::normalize(glm::cross(u, v));
      }

   private:
      std::array<Vertex, 3> m_vertices;

   };
}
