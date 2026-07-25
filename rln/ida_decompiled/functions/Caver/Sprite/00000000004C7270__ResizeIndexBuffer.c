/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004C7270
 * Mangled: _ZN5Caver6Sprite17ResizeIndexBufferEi
 * Demangled: Caver::Sprite::ResizeIndexBuffer(int)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001F8570  operator new[](ulong)
 *   0x0000000000201760  .memcpy
 *
 * Referenced strings: 12
 *   insn=0x00000000004C7290 string=0x00000000004C7294 "h"
 *   insn=0x00000000004C7294 string=0x00000000004C7298 "}@"
 *   insn=0x00000000004C7298 string=0x00000000004C729C ""
 *   insn=0x00000000004C72A4 string=0x00000000001F8570 "0'"
 *   insn=0x00000000004C72B4 string=0x00000000004C72B8 ""
 *   insn=0x00000000004C72C0 string=0x00000000004C72C4 "h"
 *   insn=0x00000000004C72C4 string=0x00000000004C72C8 ""
 *   insn=0x00000000004C72D4 string=0x00000000004C72D8 """
 *   insn=0x00000000004C72DC string=0x00000000004C72E0 "6"
 *   insn=0x00000000004C72E0 string=0x00000000004C72E4 "\n"
 *   insn=0x00000000004C72FC string=0x00000000004C7300 "v"
 *   insn=0x00000000004C7308 string=0x00000000001F4F60 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Sprite::ResizeIndexBuffer(Caver::Sprite *this, int a2)
{
  __int64 v4; // x8
  bool v5; // cf
  __int64 v6; // x8
  unsigned __int64 v7; // x0
  void *v8; // x0
  int v9; // w8
  void *v10; // x21
  const void *v11; // x22
  void *v12; // x0

  if ( a2 < 1 )
  {
    v12 = (void *)*((_QWORD *)this + 4);
    *((_QWORD *)this + 4) = 0;
    if ( !v12 )
      goto LABEL_15;
    goto LABEL_14;
  }
  v4 = 3 * a2;
  v5 = __CFADD__(v4, v4);
  v6 = 2 * v4;
  if ( v5 )
    v7 = -1;
  else
    v7 = v6;
  v8 = (void *)operator new[](v7);
  v9 = *((_DWORD *)this + 7);
  v10 = v8;
  if ( v9 <= 0 )
  {
    v11 = (const void *)*((_QWORD *)this + 4);
    *((_QWORD *)this + 4) = v8;
    if ( !v11 )
      goto LABEL_15;
    goto LABEL_13;
  }
  v11 = (const void *)*((_QWORD *)this + 4);
  if ( v9 > a2 )
    v9 = a2;
  memcpy(v8, v11, 6LL * v9);
  *((_QWORD *)this + 4) = v10;
  if ( v11 )
  {
LABEL_13:
    v12 = (void *)v11;
LABEL_14:
    operator delete[](v12);
  }
LABEL_15:
  *((_DWORD *)this + 6) = a2;
}

