/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000449130
 * Mangled: _ZN5Caver12MeshInstance4DrawEPNS_16RenderingContextE
 * Demangled: Caver::MeshInstance::Draw(Caver::RenderingContext *)
 *
 * Callers: 1
 *   0x00000000001F69F0  Caver::MeshInstance::Draw(Caver::RenderingContext *)
 *
 * Callees: 6
 *   0x00000000001F3880  Caver::VertexArrayObject::UpdateVertexBufferObjectData(void)
 *   0x00000000001F3E20  Caver::VertexArrayObject::SwapBufferObjects(void)
 *   0x00000000001F9030  Caver::VertexArrayObject::Draw(Caver::RenderingContext *,int,int,int)
 *   0x00000000001F91E0  Caver::VertexArrayObject::DeleteClientSideBuffers(void)
 *   0x00000000001FA770  Caver::VertexArrayObject::AddArray(uint,int,Caver::DataType,int,void *)
 *   0x00000000001FBDD0  Caver::VertexArrayObject::CreateBufferObjects(bool)
 *
 * Referenced strings: 29
 *   insn=0x000000000044914C string=0x0000000000449150 ""
 *   insn=0x000000000044914C string=0x0000000000449160 ""
 *   insn=0x0000000000449168 string=0x000000000044916C "\n"
 *   insn=0x0000000000449170 string=0x0000000000449174 "+"
 *   insn=0x0000000000449174 string=0x0000000000449178 "J"
 *   insn=0x0000000000449178 string=0x000000000044917C "\n"
 *   insn=0x000000000044917C string=0x0000000000449180 "("
 *   insn=0x0000000000449184 string=0x0000000000449188 "("
 *   insn=0x0000000000449190 string=0x0000000000449194 "h"
 *   insn=0x00000000004491C0 string=0x00000000001FBDD0 "0'"
 *   insn=0x00000000004491D4 string=0x00000000004491D8 "f"
 *   insn=0x00000000004491D8 string=0x00000000001FA770 "0'"
 *   insn=0x00000000004491DC string=0x00000000004491E0 "_"
 *   insn=0x00000000004491F8 string=0x00000000004491FC "]"
 *   insn=0x0000000000449200 string=0x0000000000449204 "AA"
 *   insn=0x0000000000449208 string=0x000000000044920C ""
 *   insn=0x0000000000449224 string=0x0000000000449228 "R"
 *   insn=0x000000000044922C string=0x0000000000449230 "_"
 *   insn=0x0000000000449248 string=0x000000000044924C "I"
 *   insn=0x0000000000449250 string=0x0000000000449254 "h"
 *   insn=0x000000000044925C string=0x00000000001F91E0 "0'"
 *   insn=0x0000000000449270 string=0x00000000001F3E20 "P'"
 *   insn=0x0000000000449278 string=0x00000000001F3880 "P'"
 *   insn=0x0000000000449280 string=0x0000000000449284 "\t"
 *   insn=0x0000000000449284 string=0x0000000000449288 "I"
 *   insn=0x0000000000449288 string=0x000000000044928C ")"
 *   insn=0x0000000000449290 string=0x00000000004492A4 ""
 *   insn=0x00000000004492C4 string=0x00000000004492C8 "Z"
 *   insn=0x00000000004492C8 string=0x00000000001F9030 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::MeshInstance::Draw(__int64 this, Caver::RenderingContext *a2)
{
  __int64 v2; // x20
  int *v4; // x8
  _DWORD *v5; // x9
  int v6; // w8
  Caver::VertexArrayObject *v7; // x0
  bool v8; // w1

  v2 = this;
  if ( *(_BYTE *)(this + 178) )
  {
    v4 = &dword_6E9A04;
    *(_BYTE *)(this + 178) = 0;
  }
  else
  {
    v4 = &dword_6E9A00;
  }
  v5 = *(_DWORD **)this;
  *v4 += **(_DWORD **)this;
  dword_6E9A08 += v5[1];
  if ( !*(_BYTE *)(this + 176) )
  {
    v6 = *(unsigned __int8 *)(this + 16);
    *(_BYTE *)(this + 176) = 1;
    if ( v6 )
    {
      v7 = (Caver::VertexArrayObject *)(this + 104);
      v8 = 0;
    }
    else
    {
      v8 = 1;
      v7 = (Caver::VertexArrayObject *)(this + 104);
    }
    Caver::VertexArrayObject::CreateBufferObjects(v7, v8);
    this = Caver::VertexArrayObject::AddArray();
    if ( *(int *)(v2 + 52) >= 1 )
      this = Caver::VertexArrayObject::AddArray();
    if ( *(int *)(*(_QWORD *)v2 + 320LL) >= 1 )
      this = Caver::VertexArrayObject::AddArray();
    if ( *(int *)(v2 + 84) >= 1 )
      this = Caver::VertexArrayObject::AddArray();
    if ( *(_BYTE *)(v2 + 16) )
      this = Caver::VertexArrayObject::DeleteClientSideBuffers((Caver::VertexArrayObject *)(v2 + 104));
  }
  if ( *(_BYTE *)(v2 + 177) )
  {
    Caver::VertexArrayObject::SwapBufferObjects((Caver::VertexArrayObject *)(v2 + 104));
    this = Caver::VertexArrayObject::UpdateVertexBufferObjectData((Caver::VertexArrayObject *)(v2 + 104));
    *(_BYTE *)(v2 + 177) = 0;
  }
  if ( !(unsigned int)((*(_QWORD *)(*(_QWORD *)v2 + 304LL) - *(_QWORD *)(*(_QWORD *)v2 + 296LL)) >> 2) )
    return Caver::VertexArrayObject::Draw(
             (Caver::VertexArrayObject *)(v2 + 104),
             a2,
             4,
             0,
             3 * *(_DWORD *)(*(_QWORD *)v2 + 4LL));
  return this;
}

