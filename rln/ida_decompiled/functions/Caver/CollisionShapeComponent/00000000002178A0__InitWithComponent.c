/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002178A0
 * Mangled: _ZN5Caver23CollisionShapeComponent17InitWithComponentEPKS0_
 * Demangled: Caver::CollisionShapeComponent::InitWithComponent(Caver::CollisionShapeComponent const*)
 *
 * Callers: 1
 *   0x00000000001FA760  Caver::CollisionShapeComponent::InitWithComponent(Caver::CollisionShapeComponent const*)
 *
 * Callees: 2
 *   0x00000000001F3920  Caver::ShapeComponent::InitWithComponent(Caver::ShapeComponent const*)
 *   0x000000000056A6A8  sub_56A6A8
 *
 * Referenced strings: 88
 *   insn=0x00000000002178B8 string=0x00000000001F3920 "P'"
 *   insn=0x00000000002178BC string=0x00000000002178C0 "kr@"
 *   insn=0x00000000002178C0 string=0x00000000002178C4 "i"
 *   insn=0x00000000002178C4 string=0x00000000002178C8 "j"
 *   insn=0x00000000002178C8 string=0x00000000002178CC "k\n"
 *   insn=0x00000000002178D0 string=0x00000000002178D4 "\n"
 *   insn=0x00000000002178D0 string=0x00000000002178E0 "u"
 *   insn=0x00000000002178D4 string=0x00000000002178D8 "J"
 *   insn=0x00000000002178D8 string=0x00000000002178DC "\n"
 *   insn=0x00000000002178E0 string=0x00000000002178E4 "i""
 *   insn=0x00000000002178E4 string=0x00000000002178E8 "5"
 *   insn=0x00000000002178EC string=0x00000000002178F0 ""
 *   insn=0x0000000000217900 string=0x0000000000217904 "\t@"
 *   insn=0x000000000021790C string=0x0000000000217910 ""
 *   insn=0x0000000000217920 string=0x0000000000217924 "@"
 *   insn=0x000000000021792C string=0x0000000000217930 "`B"
 *   insn=0x0000000000217934 string=0x0000000000217938 "h"
 *   insn=0x000000000021793C string=0x0000000000217940 "h"
 *   insn=0x0000000000217944 string=0x0000000000217948 "h"
 *   insn=0x000000000021794C string=0x0000000000217950 "h"
 *   insn=0x0000000000217954 string=0x0000000000217958 "h"
 *   insn=0x000000000021795C string=0x0000000000217960 "h"
 *   insn=0x0000000000217964 string=0x0000000000217968 "h""
 *   insn=0x0000000000217968 string=0x000000000021796C "OK"
 *   insn=0x0000000000217974 string=0x0000000000217978 "\n"
 *   insn=0x0000000000217974 string=0x0000000000217984 "uR@"
 *   insn=0x0000000000217978 string=0x000000000021797C "J"
 *   insn=0x000000000021797C string=0x0000000000217980 "\n"
 *   insn=0x0000000000217984 string=0x0000000000217988 "i"
 *   insn=0x0000000000217990 string=0x0000000000217994 ""
 *   insn=0x0000000000217998 string=0x000000000021799C "!"
 *   insn=0x00000000002179A4 string=0x00000000002179A8 "\t@"
 *   insn=0x00000000002179B0 string=0x00000000002179B4 ""
 *   insn=0x00000000002179C4 string=0x00000000002179C8 "\n"
 *   insn=0x00000000002179C4 string=0x00000000002179D4 "uZ@"
 *   insn=0x00000000002179C8 string=0x00000000002179CC "J"
 *   insn=0x00000000002179CC string=0x00000000002179D0 "\n"
 *   insn=0x00000000002179D4 string=0x00000000002179D8 "i"
 *   insn=0x00000000002179D8 string=0x00000000002179DC "5"
 *   insn=0x00000000002179DC string=0x0000000000217A20 "`"
 *   insn=0x00000000002179E0 string=0x00000000002179E4 ""
 *   insn=0x00000000002179F4 string=0x00000000002179F8 "\t@"
 *   insn=0x0000000000217A00 string=0x0000000000217A04 ""
 *   insn=0x0000000000217A14 string=0x0000000000217A18 "@"
 *   insn=0x0000000000217A24 string=0x0000000000217A28 " K"
 *   insn=0x0000000000217A30 string=0x0000000000217A34 "\n"
 *   insn=0x0000000000217A30 string=0x0000000000217A40 "uf@"
 *   insn=0x0000000000217A34 string=0x0000000000217A38 "J"
 *   insn=0x0000000000217A38 string=0x0000000000217A3C "\n"
 *   insn=0x0000000000217A40 string=0x0000000000217A44 "i""
 *   insn=0x0000000000217A4C string=0x0000000000217A50 ""
 *   insn=0x0000000000217A54 string=0x0000000000217A58 "!"
 *   insn=0x0000000000217A60 string=0x0000000000217A64 "\t@"
 *   insn=0x0000000000217A6C string=0x0000000000217A70 ""
 *   insn=0x0000000000217A80 string=0x0000000000217A84 "\n"
 *   insn=0x0000000000217A80 string=0x0000000000217A90 "un@"
 *   insn=0x0000000000217A84 string=0x0000000000217A88 "J"
 *   insn=0x0000000000217A88 string=0x0000000000217A8C "\n"
 *   insn=0x0000000000217A90 string=0x0000000000217A94 "i""
 *   insn=0x0000000000217A94 string=0x0000000000217A98 "5"
 *   insn=0x0000000000217A98 string=0x0000000000217ADC "`"
 *   insn=0x0000000000217A9C string=0x0000000000217AA0 ""
 *   insn=0x0000000000217AB0 string=0x0000000000217AB4 "\t@"
 *   insn=0x0000000000217ABC string=0x0000000000217AC0 ""
 *   insn=0x0000000000217AD0 string=0x0000000000217AD4 "@"
 *   insn=0x0000000000217AEC string=0x0000000000217AF0 "\n"
 *   insn=0x0000000000217AEC string=0x0000000000217AFC "uz@"
 *   insn=0x0000000000217AF0 string=0x0000000000217AF4 "J"
 *   insn=0x0000000000217AF4 string=0x0000000000217AF8 "\n"
 *   insn=0x0000000000217AFC string=0x0000000000217B00 "i"
 *   insn=0x0000000000217B08 string=0x0000000000217B0C ""
 *   insn=0x0000000000217B10 string=0x0000000000217B14 "!"
 *   insn=0x0000000000217B1C string=0x0000000000217B20 "\t@"
 *   insn=0x0000000000217B28 string=0x0000000000217B2C ""
 *   insn=0x0000000000217B3C string=0x0000000000217B40 "\n"
 *   insn=0x0000000000217B3C string=0x0000000000217B4C "t"
 *   insn=0x0000000000217B40 string=0x0000000000217B44 "J"
 *   insn=0x0000000000217B44 string=0x0000000000217B48 "\n"
 *   insn=0x0000000000217B4C string=0x0000000000217B50 "i"
 *   insn=0x0000000000217B58 string=0x0000000000217B5C ""
 *   insn=0x0000000000217B60 string=0x0000000000217B64 "!"
 *   insn=0x0000000000217B6C string=0x0000000000217B70 "\t@"
 *   insn=0x0000000000217B78 string=0x0000000000217B7C ""
 *   insn=0x0000000000217B80 string=0x0000000000217B84 "@"
 *   insn=0x0000000000217B9C string=0x0000000000217BA0 "@"
 *   insn=0x0000000000217BB8 string=0x0000000000217BBC "@"
 *   insn=0x0000000000217BD4 string=0x0000000000217BD8 "@"
 *   insn=0x0000000000217C00 string=0x0000000000217C04 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::CollisionShapeComponent::InitWithComponent(
        Caver::CollisionShapeComponent *this,
        const Caver::CollisionShapeComponent *a2)
{
  int v4; // w11
  __int64 v5; // x8
  __int64 v6; // x9
  _QWORD *v7; // x21
  __int64 v8; // x8
  __int64 v9; // x8
  __int64 v10; // x8
  __int64 v11; // x9
  _QWORD *v12; // x21
  __int64 v13; // x8
  __int64 v14; // x8
  __int64 v15; // x8
  __int64 v16; // x9
  _QWORD *v17; // x21
  __int64 v18; // x8
  __int64 v19; // x8
  __int64 v20; // x8
  __int64 v21; // x9
  _QWORD *v22; // x21
  __int64 v23; // x8
  __int64 v24; // x8
  __int64 v25; // x8
  __int64 v26; // x9
  _QWORD *v27; // x21
  __int64 v28; // x8
  __int64 v29; // x8
  __int64 result; // x0
  __int64 v31; // x8
  __int64 v32; // x9
  _QWORD *v33; // x21
  __int64 v34; // x8
  __int64 v35; // x8
  __int64 v36; // x8
  __int64 v37; // x9
  _QWORD *v38; // x20
  __int64 v39; // x8
  __int64 v40; // x8

  Caver::ShapeComponent::InitWithComponent(this, a2);
  v4 = *((_DWORD *)this + 28);
  v6 = *((_QWORD *)this + 15);
  v5 = *((_QWORD *)this + 16);
  *((_BYTE *)this + 376) = *((_BYTE *)a2 + 376);
  *((_DWORD *)this + 66) = v4;
  if ( v5 )
    ++*(_QWORD *)(v5 + 8);
  v7 = (_QWORD *)*((_QWORD *)this + 35);
  *((_QWORD *)this + 34) = v6;
  *((_QWORD *)this + 35) = v5;
  if ( v7 )
  {
    v8 = v7[1] - 1LL;
    v7[1] = v8;
    if ( !v8 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v7 + 16LL))(v7);
      v9 = v7[2] - 1LL;
      v7[2] = v9;
      if ( !v9 )
        (*(void (__fastcall **)(_QWORD *))(*v7 + 24LL))(v7);
    }
  }
  *((_QWORD *)this + 42) = *((_QWORD *)a2 + 42);
  *((_BYTE *)this + 378) = *((_BYTE *)a2 + 378);
  *((_BYTE *)this + 379) = *((_BYTE *)a2 + 379);
  *((_BYTE *)this + 380) = *((_BYTE *)a2 + 380);
  *((_BYTE *)this + 381) = *((_BYTE *)a2 + 381);
  *((_QWORD *)this + 48) = *((_QWORD *)a2 + 48);
  *((_BYTE *)this + 392) = *((_BYTE *)a2 + 392);
  sub_56A6A8((char *)this + 144, (char *)a2 + 144);
  v11 = *((_QWORD *)a2 + 19);
  v10 = *((_QWORD *)a2 + 20);
  if ( v10 )
    ++*(_QWORD *)(v10 + 8);
  v12 = (_QWORD *)*((_QWORD *)this + 20);
  *((_QWORD *)this + 19) = v11;
  *((_QWORD *)this + 20) = v10;
  if ( v12 )
  {
    v13 = v12[1] - 1LL;
    v12[1] = v13;
    if ( !v13 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v12 + 16LL))(v12);
      v14 = v12[2] - 1LL;
      v12[2] = v14;
      if ( !v14 )
      {
        (*(void (__fastcall **)(_QWORD *))(*v12 + 24LL))(v12);
        v16 = *((_QWORD *)a2 + 21);
        v15 = *((_QWORD *)a2 + 22);
        if ( !v15 )
          goto LABEL_14;
        goto LABEL_13;
      }
    }
  }
  v16 = *((_QWORD *)a2 + 21);
  v15 = *((_QWORD *)a2 + 22);
  if ( v15 )
LABEL_13:
    ++*(_QWORD *)(v15 + 8);
LABEL_14:
  v17 = (_QWORD *)*((_QWORD *)this + 22);
  *((_QWORD *)this + 21) = v16;
  *((_QWORD *)this + 22) = v15;
  if ( v17 )
  {
    v18 = v17[1] - 1LL;
    v17[1] = v18;
    if ( !v18 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v17 + 16LL))(v17);
      v19 = v17[2] - 1LL;
      v17[2] = v19;
      if ( !v19 )
        (*(void (__fastcall **)(_QWORD *))(*v17 + 24LL))(v17);
    }
  }
  sub_56A6A8((char *)this + 184, (char *)a2 + 184);
  v21 = *((_QWORD *)a2 + 24);
  v20 = *((_QWORD *)a2 + 25);
  if ( v20 )
    ++*(_QWORD *)(v20 + 8);
  v22 = (_QWORD *)*((_QWORD *)this + 25);
  *((_QWORD *)this + 24) = v21;
  *((_QWORD *)this + 25) = v20;
  if ( v22 )
  {
    v23 = v22[1] - 1LL;
    v22[1] = v23;
    if ( !v23 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v22 + 16LL))(v22);
      v24 = v22[2] - 1LL;
      v22[2] = v24;
      if ( !v24 )
      {
        (*(void (__fastcall **)(_QWORD *))(*v22 + 24LL))(v22);
        v26 = *((_QWORD *)a2 + 26);
        v25 = *((_QWORD *)a2 + 27);
        if ( !v25 )
          goto LABEL_25;
        goto LABEL_24;
      }
    }
  }
  v26 = *((_QWORD *)a2 + 26);
  v25 = *((_QWORD *)a2 + 27);
  if ( v25 )
LABEL_24:
    ++*(_QWORD *)(v25 + 8);
LABEL_25:
  v27 = (_QWORD *)*((_QWORD *)this + 27);
  *((_QWORD *)this + 26) = v26;
  *((_QWORD *)this + 27) = v25;
  if ( v27 )
  {
    v28 = v27[1] - 1LL;
    v27[1] = v28;
    if ( !v28 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v27 + 16LL))(v27);
      v29 = v27[2] - 1LL;
      v27[2] = v29;
      if ( !v29 )
        (*(void (__fastcall **)(_QWORD *))(*v27 + 24LL))(v27);
    }
  }
  result = sub_56A6A8((char *)this + 224, (char *)a2 + 224);
  v32 = *((_QWORD *)a2 + 29);
  v31 = *((_QWORD *)a2 + 30);
  if ( v31 )
    ++*(_QWORD *)(v31 + 8);
  v33 = (_QWORD *)*((_QWORD *)this + 30);
  *((_QWORD *)this + 29) = v32;
  *((_QWORD *)this + 30) = v31;
  if ( v33 )
  {
    v34 = v33[1] - 1LL;
    v33[1] = v34;
    if ( !v34 )
    {
      result = (*(__int64 (__fastcall **)(_QWORD *))(*v33 + 16LL))(v33);
      v35 = v33[2] - 1LL;
      v33[2] = v35;
      if ( !v35 )
      {
        result = (*(__int64 (__fastcall **)(_QWORD *))(*v33 + 24LL))(v33);
        v37 = *((_QWORD *)a2 + 31);
        v36 = *((_QWORD *)a2 + 32);
        if ( !v36 )
          goto LABEL_36;
        goto LABEL_35;
      }
    }
  }
  v37 = *((_QWORD *)a2 + 31);
  v36 = *((_QWORD *)a2 + 32);
  if ( v36 )
LABEL_35:
    ++*(_QWORD *)(v36 + 8);
LABEL_36:
  v38 = (_QWORD *)*((_QWORD *)this + 32);
  *((_QWORD *)this + 31) = v37;
  *((_QWORD *)this + 32) = v36;
  if ( v38 )
  {
    v39 = v38[1] - 1LL;
    v38[1] = v39;
    if ( !v39 )
    {
      result = (*(__int64 (__fastcall **)(_QWORD *))(*v38 + 16LL))(v38);
      v40 = v38[2] - 1LL;
      v38[2] = v40;
      if ( !v40 )
        return (*(__int64 (__fastcall **)(_QWORD *))(*v38 + 24LL))(v38);
    }
  }
  return result;
}

