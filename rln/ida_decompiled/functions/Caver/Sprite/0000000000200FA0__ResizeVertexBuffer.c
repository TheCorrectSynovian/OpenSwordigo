/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000200FA0
 * Mangled: ._ZN5Caver6Sprite18ResizeVertexBufferEi
 * Demangled: Caver::Sprite::ResizeVertexBuffer(int)
 *
 * Callers: 1
 *   0x00000000004C53E4  Caver::FontText::AddText(std::string const&,float,Caver::Vector2 const&)
 *
 * Callees: 1
 *   0x00000000004C71B4  Caver::Sprite::ResizeVertexBuffer(int)
 *
 * Referenced strings: 1
 *   insn=0x0000000000200FA8 string=0x0000000000200FAC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Sprite::ResizeVertexBuffer(Caver::Sprite *this, int a2)
{
  return _ZN5Caver6Sprite18ResizeVertexBufferEi(this, a2);
}

