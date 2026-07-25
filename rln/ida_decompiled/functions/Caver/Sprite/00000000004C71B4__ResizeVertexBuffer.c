/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004C71B4
 * Mangled: _ZN5Caver6Sprite18ResizeVertexBufferEi
 * Demangled: Caver::Sprite::ResizeVertexBuffer(int)
 *
 * Callers: 1
 *   0x0000000000200FA0  Caver::Sprite::ResizeVertexBuffer(int)
 *
 * Callees: 3
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001F8570  operator new[](ulong)
 *   0x0000000000201760  .memcpy
 *
 * Referenced strings: 15
 *   insn=0x00000000004C71C8 string=0x00000000004C71CC "x2@"
 *   insn=0x00000000004C71D0 string=0x00000000004C71D4 ""
 *   insn=0x00000000004C71D4 string=0x00000000004C71D8 "}@"
 *   insn=0x00000000004C71E4 string=0x00000000004C71E8 "h.@"
 *   insn=0x00000000004C71E4 string=0x00000000001F8570 "0'"
 *   insn=0x00000000004C71F4 string=0x00000000004C71F8 "M"
 *   insn=0x00000000004C7204 string=0x00000000004C7208 "}"
 *   insn=0x00000000004C7214 string=0x00000000004C7218 "R"
 *   insn=0x00000000004C7220 string=0x00000000004C7230 "iBA9"
 *   insn=0x00000000004C7224 string=0x00000000004C7228 "N"
 *   insn=0x00000000004C7228 string=0x00000000001F4F60 "P'"
 *   insn=0x00000000004C7234 string=0x00000000004C7238 "t*"
 *   insn=0x00000000004C7238 string=0x00000000004C723C "i"
 *   insn=0x00000000004C723C string=0x00000000004C7240 "h""
 *   insn=0x00000000004C723C string=0x00000000004C7248 "h&"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Sprite::ResizeVertexBuffer(Caver::Sprite *this, int a2)
{
  int v3; // w24
  unsigned __int64 v5; // x0
  char *v6; // x0
  int v7; // w8
  char *v8; // x21
  void *v9; // x22
  char **v10; // x23
  int v11; // w9
  char *v12; // x8

  v3 = *((_DWORD *)this + 12);
  if ( v3 * a2 < 0LL )
    v5 = -1;
  else
    v5 = v3 * a2;
  v6 = (char *)operator new[](v5);
  v7 = *((_DWORD *)this + 11);
  v8 = v6;
  if ( v7 <= 0 )
  {
    v10 = (char **)((char *)this + 56);
    v9 = (void *)*((_QWORD *)this + 7);
    *((_QWORD *)this + 7) = v6;
    if ( v9 )
    {
LABEL_8:
      operator delete[](v9);
      v8 = *v10;
    }
  }
  else
  {
    v10 = (char **)((char *)this + 56);
    v9 = (void *)*((_QWORD *)this + 7);
    if ( v7 > a2 )
      v7 = a2;
    memcpy(v6, v9, v7 * v3);
    *v10 = v8;
    if ( v9 )
      goto LABEL_8;
  }
  v11 = *((unsigned __int8 *)this + 80);
  v12 = v8 + 12;
  *((_DWORD *)this + 10) = a2;
  if ( v11 )
  {
    *((_QWORD *)this + 8) = v12;
    v12 = v8 + 16;
  }
  *((_QWORD *)this + 9) = v12;
}

