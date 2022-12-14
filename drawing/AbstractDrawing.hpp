#pragma once

#include <cstdint>
#include <string>

namespace drawing::impl {
    struct DrawSettings {
        std::string title;
        uint32_t vertex_count;
    };

    struct VertexDescriptor {
        uint32_t id;
    };

    struct AbstractDrawing {
        virtual void AddCircle(const uint32_t &vertex_id) = 0;

        virtual void AddLine(uint32_t u, uint32_t v) = 0;

        virtual void Draw() = 0;

        virtual ~AbstractDrawing() = default;
    };

}
