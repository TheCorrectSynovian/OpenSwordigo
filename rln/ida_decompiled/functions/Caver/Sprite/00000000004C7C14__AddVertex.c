/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004C7C14
 * Mangled: _ZN5Caver6Sprite9AddVertexERKNS_7Vector2ES3_RKNS_5ColorE
 * Demangled: Caver::Sprite::AddVertex(Caver::Vector2 const&,Caver::Vector2 const&,Caver::Color const&)
 *
 * Callers: 1
 *   0x00000000001F8350  Caver::Sprite::AddVertex(Caver::Vector2 const&,Caver::Vector2 const&,Caver::Color const&)
 *
 * Callees: 3
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001F8570  operator new[](ulong)
 *   0x0000000000201760  .memcpy
 *
 * Referenced strings: 35
 *   insn=0x00000000004C7C34 string=0x00000000004C7C38 "hjE)"
 *   insn=0x00000000004C7C40 string=0x00000000004C7C44 "_"
 *   insn=0x00000000004C7C48 string=0x00000000004C7C4C "w"
 *   insn=0x00000000004C7C4C string=0x00000000004C7C50 "hBA9y"
 *   insn=0x00000000004C7C50 string=0x00000000004C7C54 "y"
 *   insn=0x00000000004C7C54 string=0x00000000004C7C58 "'"
 *   insn=0x00000000004C7C58 string=0x00000000004C7CF4 ")"
 *   insn=0x00000000004C7C60 string=0x00000000004C7C64 "5"
 *   insn=0x00000000004C7C64 string=0x00000000004C7C68 "y"
 *   insn=0x00000000004C7C70 string=0x00000000004C7C74 ""
 *   insn=0x00000000004C7C78 string=0x00000000004C7C7C "}@"
 *   insn=0x00000000004C7C84 string=0x00000000004C7C88 ":"
 *   insn=0x00000000004C7C88 string=0x00000000004C7C8C "_"
 *   insn=0x00000000004C7C88 string=0x00000000001F8570 "0'"
 *   insn=0x00000000004C7C9C string=0x00000000004C7CA0 "_"
 *   insn=0x00000000004C7CA0 string=0x00000000004C7CA4 "h"
 *   insn=0x00000000004C7CC0 string=0x00000000004C7CD0 "hBA9"
 *   insn=0x00000000004C7CC8 string=0x00000000001F4F60 "P'"
 *   insn=0x00000000004C7CD4 string=0x00000000004C7CD8 "{*"
 *   insn=0x00000000004C7CD8 string=0x00000000004C7CDC "h"
 *   insn=0x00000000004C7CDC string=0x00000000004C7CE0 "i""
 *   insn=0x00000000004C7CE8 string=0x00000000004C7CEC "z.@"
 *   insn=0x00000000004C7CEC string=0x00000000004C7CF0 "i&"
 *   insn=0x00000000004C7CF8 string=0x00000000004C7CFC "K"
 *   insn=0x00000000004C7CFC string=0x00000000004C7D00 ")]"
 *   insn=0x00000000004C7D00 string=0x00000000004C7D04 "*"
 *   insn=0x00000000004C7D04 string=0x00000000004C7D08 "?\t"
 *   insn=0x00000000004C7D08 string=0x00000000004C7D0C ")1"
 *   insn=0x00000000004C7D10 string=0x00000000004C7D14 "h"
 *   insn=0x00000000004C7D14 string=0x00000000004C7D18 "(E"
 *   insn=0x00000000004C7D18 string=0x00000000004C7D1C "z.@"
 *   insn=0x00000000004C7D20 string=0x00000000004C7D24 "J"
 *   insn=0x00000000004C7D24 string=0x00000000004C7D28 "("
 *   insn=0x00000000004C7D28 string=0x00000000004C7D2C "j."
 *   insn=0x00000000004C7D54 string=0x00000000004C7D58 "x"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Sprite::AddVertex(
        Caver::Sprite *this,
        const Caver::Vector2 *a2,
        const Caver::Vector2 *a3,
        const Caver::Color *a4)
{
  int v5; // w8
  int v6; // w26
  char *v9; // x23
  int v10; // w8
  int *v11; // x25
  int v12; // w21
  int v13; // w8
  int v14; // w27
  unsigned __int64 v15; // x0
  char *v16; // x0
  void *v17; // x24
  char **v18; // x28
  int v19; // w8
  char *v20; // x9
  char *v21; // x9
  _DWORD *v22; // x9
  const Caver::Color *v23; // [xsp+8h] [xbp-58h]

  v5 = *((_DWORD *)this + 10);
  v6 = *((_DWORD *)this + 11);
  if ( v6 < v5 )
  {
    v9 = (char *)*((_QWORD *)this + 7);
    v10 = *((unsigned __int8 *)this + 80);
    v11 = (int *)((char *)this + 48);
    goto LABEL_18;
  }
  v23 = a4;
  v11 = (int *)((char *)this + 48);
  v12 = *((_DWORD *)this + 12);
  v13 = 2 * v5;
  if ( v13 <= 4 )
    v14 = 4;
  else
    v14 = v13;
  if ( v12 * v14 < 0LL )
    v15 = -1;
  else
    v15 = v12 * v14;
  v16 = (char *)operator new[](v15);
  v9 = v16;
  if ( v6 <= 0 )
  {
    v18 = (char **)((char *)this + 56);
    v17 = (void *)*((_QWORD *)this + 7);
    *((_QWORD *)this + 7) = v16;
    if ( !v17 )
      goto LABEL_15;
  }
  else
  {
    v18 = (char **)((char *)this + 56);
    v17 = (void *)*((_QWORD *)this + 7);
    if ( v6 <= v14 )
      v19 = v6;
    else
      v19 = v14;
    memcpy(v16, v17, v12 * v19);
    *v18 = v9;
    if ( !v17 )
      goto LABEL_15;
  }
  operator delete[](v17);
  v9 = *v18;
LABEL_15:
  v10 = *((unsigned __int8 *)this + 80);
  v20 = v9 + 12;
  *((_DWORD *)this + 10) = v14;
  if ( v10 )
  {
    *((_QWORD *)this + 8) = v20;
    v20 = v9 + 16;
  }
  a4 = v23;
  v6 = *((_DWORD *)this + 11);
  *((_QWORD *)this + 9) = v20;
LABEL_18:
  v21 = &v9[*v11 * (__int64)v6];
  *(_QWORD *)v21 = *(_QWORD *)a2;
  *((_DWORD *)v21 + 2) = 0;
  v22 = v21 + 12;
  if ( v10 )
  {
    *v22++ = *(_DWORD *)a4;
    v6 = *((_DWORD *)this + 11);
  }
  *(_QWORD *)v22 = *(_QWORD *)a3;
  *((_DWORD *)this + 11) = v6 + 1;
}

