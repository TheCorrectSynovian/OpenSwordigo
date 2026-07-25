/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000048C2BC
 * Mangled: _ZN5Caver16RenderingContext22SetVertexAttribPointerEjiNS_8DataTypeEiPKv
 * Demangled: Caver::RenderingContext::SetVertexAttribPointer(uint,int,Caver::DataType,int,void const*)
 *
 * Callers: 1
 *   0x00000000001FE920  Caver::RenderingContext::SetVertexAttribPointer(uint,int,Caver::DataType,int,void const*)
 *
 * Callees: 1
 *   0x0000000000201270  Caver::VertexArrayObject::SetVertexAttribPointer(Caver::RenderingContext *,uint,int,Caver::DataType,int,void const*)
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::RenderingContext::SetVertexAttribPointer(void)
{
  return Caver::VertexArrayObject::SetVertexAttribPointer();
}

