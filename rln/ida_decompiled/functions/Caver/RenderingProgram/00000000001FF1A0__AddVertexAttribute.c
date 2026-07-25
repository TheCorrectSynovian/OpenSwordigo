/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FF1A0
 * Mangled: ._ZN5Caver16RenderingProgram18AddVertexAttributeEjRKSs
 * Demangled: Caver::RenderingProgram::AddVertexAttribute(uint,std::string const&)
 *
 * Callers: 1
 *   0x000000000048DB54  Caver::BasicRenderingPrograms::AddToContext(Caver::RenderingContext *)
 *
 * Callees: 1
 *   0x000000000048CE18  Caver::RenderingProgram::~RenderingProgram()
 *
 * Referenced strings: 1
 *   insn=0x00000000001FF1A8 string=0x00000000001FF1AC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::RenderingProgram::AddVertexAttribute()
{
  JUMPOUT(0x48D030);
}

