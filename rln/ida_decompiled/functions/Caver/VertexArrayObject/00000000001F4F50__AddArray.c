/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F4F50
 * Mangled: ._ZN5Caver17VertexArrayObject8AddArrayEjiNS_8DataTypeEii
 * Demangled: Caver::VertexArrayObject::AddArray(uint,int,Caver::DataType,int,int)
 *
 * Callers: 1
 *   0x000000000048D620  Caver::VertexArrayObject::AddArray(uint,int,Caver::DataType,int,void *)
 *
 * Callees: 1
 *   0x000000000048D62C  Caver::VertexArrayObject::AddArray(uint,int,Caver::DataType,int,int)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F4F58 string=0x00000000001F4F5C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::VertexArrayObject::AddArray()
{
  return _ZN5Caver17VertexArrayObject8AddArrayEjiNS_8DataTypeEii();
}

