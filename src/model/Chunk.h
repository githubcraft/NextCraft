//
// Created by twome on 22/01/2020.
//

#ifndef NEXTCRAFT_CHUNK_H
#define NEXTCRAFT_CHUNK_H

#include "../net/McBuffer.h"
#include "../net/obj/ChunkMeta.h"
#include "Section.h"

namespace chunk {

    class Chunk {
    private:
        Section **sections;

        Chunk();

    public:
        int x;
        int z;

        static Chunk *Create(ChunkMeta &meta, McBuffer &buffer);

    };

}

#endif //NEXTCRAFT_CHUNK_H
