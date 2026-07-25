/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004C7038
 * Mangled: _ZN5Caver6Sprite4InitERKN5boost13intrusive_ptrINS_7TextureEEEiib
 * Demangled: Caver::Sprite::Init(boost::intrusive_ptr<Caver::Texture> const&,int,int,bool)
 *
 * Callers: 1
 *   0x00000000001F9730  Caver::Sprite::Init(boost::intrusive_ptr<Caver::Texture> const&,int,int,bool)
 *
 * Callees: 3
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001F8570  operator new[](ulong)
 *   0x0000000000201760  .memcpy
 *
 * Referenced strings: 32
 *   insn=0x00000000004C7048 string=0x00000000004C704C "("
 *   insn=0x00000000004C7064 string=0x00000000004C7068 "\t\t@"
 *   insn=0x00000000004C7068 string=0x00000000004C706C ")"
 *   insn=0x00000000004C706C string=0x00000000004C7070 "\t\t"
 *   insn=0x00000000004C707C string=0x00000000004C7080 "@"
 *   insn=0x00000000004C7080 string=0x00000000004C7084 ""
 *   insn=0x00000000004C7084 string=0x00000000004C7088 ""
 *   insn=0x00000000004C708C string=0x00000000004C7090 ""
 *   insn=0x00000000004C7090 string=0x00000000004C7094 ""
 *   insn=0x00000000004C70A8 string=0x00000000004C70AC "H"
 *   insn=0x00000000004C70AC string=0x00000000004C70B0 "?"
 *   insn=0x00000000004C70C0 string=0x00000000004C70C4 "`"
 *   insn=0x00000000004C70C4 string=0x00000000004C70C8 "}"
 *   insn=0x00000000004C70C8 string=0x00000000004C70CC "}@"
 *   insn=0x00000000004C70D4 string=0x00000000004C70D8 "&"
 *   insn=0x00000000004C70D8 string=0x00000000001F8570 "0'"
 *   insn=0x00000000004C70E4 string=0x00000000004C70F8 "0"
 *   insn=0x00000000004C70EC string=0x00000000001F4F60 "P'"
 *   insn=0x00000000004C70FC string=0x00000000004C7100 "w"
 *   insn=0x00000000004C7104 string=0x00000000004C7108 "@"
 *   insn=0x00000000004C7114 string=0x00000000004C7118 "@"
 *   insn=0x00000000004C7120 string=0x00000000004C7124 "h"
 *   insn=0x00000000004C7124 string=0x00000000004C7128 "}@"
 *   insn=0x00000000004C7128 string=0x00000000004C712C ""
 *   insn=0x00000000004C7144 string=0x00000000004C7148 ""
 *   insn=0x00000000004C7150 string=0x00000000004C7154 "h"
 *   insn=0x00000000004C7154 string=0x00000000004C7158 ""
 *   insn=0x00000000004C7164 string=0x00000000004C7168 "~"
 *   insn=0x00000000004C716C string=0x00000000004C7170 "6"
 *   insn=0x00000000004C7170 string=0x00000000004C7174 "\n"
 *   insn=0x00000000004C7180 string=0x00000000004C7198 "r"
 *   insn=0x00000000004C718C string=0x00000000004C7190 "v"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Sprite::Init(__int64 a1, __int64 *a2, int a3, int a4, char a5)
{
  __int64 v5; // x8
  int v10; // w23
  _DWORD *v11; // x0
  int v12; // w8
  int v13; // w9
  int v14; // w8
  __int64 v15; // x8
  unsigned __int64 v16; // x0
  __int64 v17; // x0
  void *v18; // x8
  __int64 v19; // x8
  __int64 v20; // x8
  bool v21; // cf
  __int64 v22; // x8
  unsigned __int64 v23; // x0
  void *v24; // x0
  int v25; // w8
  void *v26; // x21
  const void *v27; // x22
  void *v28; // x0

  v5 = *a2;
  v10 = a5 & 1;
  if ( *a2 )
    ++*(_DWORD *)(v5 + 8);
  v11 = *(_DWORD **)a1;
  *(_QWORD *)a1 = v5;
  if ( v11 )
  {
    v12 = v11[2] - 1;
    v11[2] = v12;
    if ( !v12 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v11 + 8LL))(v11);
  }
  v13 = *(_DWORD *)(a1 + 40);
  if ( (a5 & 1) != 0 )
    v14 = 24;
  else
    v14 = 20;
  *(_DWORD *)(a1 + 28) = 0;
  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 16) = 0;
  *(_BYTE *)(a1 + 80) = v10;
  *(_DWORD *)(a1 + 44) = 0;
  *(_DWORD *)(a1 + 48) = v14;
  if ( v13 != a4 )
  {
    v15 = v14 * a4;
    if ( v15 < 0 )
      v16 = -1;
    else
      v16 = v15;
    v17 = operator new[](v16);
    v18 = *(void **)(a1 + 56);
    *(_QWORD *)(a1 + 56) = v17;
    if ( v18 )
    {
      operator delete[](v18);
      v17 = *(_QWORD *)(a1 + 56);
      v10 = *(unsigned __int8 *)(a1 + 80);
    }
    v19 = v17 + 12;
    *(_DWORD *)(a1 + 40) = a4;
    if ( v10 )
    {
      *(_QWORD *)(a1 + 64) = v19;
      v19 = v17 + 16;
    }
    *(_QWORD *)(a1 + 72) = v19;
  }
  if ( *(_DWORD *)(a1 + 24) != a3 )
  {
    if ( a3 < 1 )
    {
      v28 = *(void **)(a1 + 32);
      *(_QWORD *)(a1 + 32) = 0;
      if ( !v28 )
        goto LABEL_33;
    }
    else
    {
      v20 = 3 * a3;
      v21 = __CFADD__(v20, v20);
      v22 = 2 * v20;
      if ( v21 )
        v23 = -1;
      else
        v23 = v22;
      v24 = (void *)operator new[](v23);
      v25 = *(_DWORD *)(a1 + 28);
      v26 = v24;
      if ( v25 <= 0 )
      {
        v27 = *(const void **)(a1 + 32);
        *(_QWORD *)(a1 + 32) = v24;
        if ( !v27 )
        {
LABEL_33:
          *(_DWORD *)(a1 + 24) = a3;
          return;
        }
      }
      else
      {
        v27 = *(const void **)(a1 + 32);
        if ( v25 > a3 )
          v25 = a3;
        memcpy(v24, v27, 6LL * v25);
        *(_QWORD *)(a1 + 32) = v26;
        if ( !v27 )
          goto LABEL_33;
      }
      v28 = (void *)v27;
    }
    operator delete[](v28);
    goto LABEL_33;
  }
}

