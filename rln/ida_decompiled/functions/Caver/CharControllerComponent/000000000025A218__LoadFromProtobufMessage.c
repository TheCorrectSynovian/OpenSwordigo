/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000025A218
 * Mangled: _ZN5Caver23CharControllerComponent23LoadFromProtobufMessageERKNS_5Proto9ComponentE
 * Demangled: Caver::CharControllerComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001FA840  Caver::Component::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x00000000001FED90  google::protobuf::internal::ExtensionSet::GetMessage(int,google::protobuf::MessageLite const&)
 *
 * Referenced strings: 144
 *   insn=0x000000000025A230 string=0x000000000025A234 "h$"
 *   insn=0x000000000025A230 string=0x00000000001FA840 "0'"
 *   insn=0x000000000025A234 string=0x000000000025A238 ""
 *   insn=0x000000000025A250 string=0x000000000025A254 "iz@"
 *   insn=0x000000000025A254 string=0x000000000025A258 "?"
 *   insn=0x000000000025A25C string=0x000000000025A260 "`B@"
 *   insn=0x000000000025A260 string=0x000000000025A264 "hz"
 *   insn=0x000000000025A26C string=0x000000000025A270 "@"
 *   insn=0x000000000025A270 string=0x000000000025A274 ""
 *   insn=0x000000000025A274 string=0x000000000025A278 ""
 *   insn=0x000000000025A27C string=0x000000000025A280 ""
 *   insn=0x000000000025A280 string=0x000000000025A284 ""
 *   insn=0x000000000025A28C string=0x000000000025A290 "i"
 *   insn=0x000000000025A290 string=0x000000000025A294 "?"
 *   insn=0x000000000025A298 string=0x000000000025A29C "`N@"
 *   insn=0x000000000025A29C string=0x000000000025A2A0 "h"
 *   insn=0x000000000025A2A8 string=0x000000000025A2AC "@"
 *   insn=0x000000000025A2AC string=0x000000000025A2B0 ""
 *   insn=0x000000000025A2B0 string=0x000000000025A2B4 ""
 *   insn=0x000000000025A2B8 string=0x000000000025A2BC ""
 *   insn=0x000000000025A2BC string=0x000000000025A2C0 ""
 *   insn=0x000000000025A2C8 string=0x000000000025A2CC "i"
 *   insn=0x000000000025A2CC string=0x000000000025A2D0 "?"
 *   insn=0x000000000025A2D4 string=0x000000000025A2D8 "`Z@"
 *   insn=0x000000000025A2D8 string=0x000000000025A2DC "h"
 *   insn=0x000000000025A2E4 string=0x000000000025A2E8 "@"
 *   insn=0x000000000025A2E8 string=0x000000000025A2EC ""
 *   insn=0x000000000025A2EC string=0x000000000025A2F0 ""
 *   insn=0x000000000025A2F4 string=0x000000000025A2F8 ""
 *   insn=0x000000000025A2F8 string=0x000000000025A2FC ""
 *   insn=0x000000000025A304 string=0x000000000025A308 "i"
 *   insn=0x000000000025A308 string=0x000000000025A30C "?"
 *   insn=0x000000000025A310 string=0x000000000025A314 "`f@"
 *   insn=0x000000000025A314 string=0x000000000025A318 "h"
 *   insn=0x000000000025A320 string=0x000000000025A324 "@"
 *   insn=0x000000000025A324 string=0x000000000025A328 ""
 *   insn=0x000000000025A328 string=0x000000000025A32C ""
 *   insn=0x000000000025A330 string=0x000000000025A334 ""
 *   insn=0x000000000025A334 string=0x000000000025A338 ""
 *   insn=0x000000000025A340 string=0x000000000025A344 "i"
 *   insn=0x000000000025A344 string=0x000000000025A348 "?"
 *   insn=0x000000000025A34C string=0x000000000025A350 "`r@"
 *   insn=0x000000000025A350 string=0x000000000025A354 "h"
 *   insn=0x000000000025A35C string=0x000000000025A360 "@"
 *   insn=0x000000000025A360 string=0x000000000025A364 ""
 *   insn=0x000000000025A364 string=0x000000000025A368 ""
 *   insn=0x000000000025A36C string=0x000000000025A370 ""
 *   insn=0x000000000025A370 string=0x000000000025A374 ""
 *   insn=0x000000000025A37C string=0x000000000025A380 "i"
 *   insn=0x000000000025A380 string=0x000000000025A384 "?"
 *   insn=0x000000000025A388 string=0x000000000025A38C "`~@"
 *   insn=0x000000000025A38C string=0x000000000025A390 "h"
 *   insn=0x000000000025A398 string=0x000000000025A39C "@"
 *   insn=0x000000000025A39C string=0x000000000025A3A0 ""
 *   insn=0x000000000025A3A0 string=0x000000000025A3A4 ""
 *   insn=0x000000000025A3A8 string=0x000000000025A3AC ""
 *   insn=0x000000000025A3AC string=0x000000000025A3B0 ""
 *   insn=0x000000000025A3B8 string=0x000000000025A3BC "i\nA"
 *   insn=0x000000000025A3BC string=0x000000000025A3C0 "?"
 *   insn=0x000000000025A3C4 string=0x000000000025A3C8 "`"
 *   insn=0x000000000025A3C8 string=0x000000000025A3CC "h\n"
 *   insn=0x000000000025A3D4 string=0x000000000025A3D8 "@"
 *   insn=0x000000000025A3D8 string=0x000000000025A3DC ""
 *   insn=0x000000000025A3DC string=0x000000000025A3E0 ""
 *   insn=0x000000000025A3E4 string=0x000000000025A3E8 ""
 *   insn=0x000000000025A3E8 string=0x000000000025A3EC ""
 *   insn=0x000000000025A3F4 string=0x000000000025A3F8 "i"A"
 *   insn=0x000000000025A3F8 string=0x000000000025A3FC "?"
 *   insn=0x000000000025A400 string=0x000000000025A404 "`"
 *   insn=0x000000000025A404 string=0x000000000025A408 "h""
 *   insn=0x000000000025A410 string=0x000000000025A414 "@"
 *   insn=0x000000000025A414 string=0x000000000025A418 ""
 *   insn=0x000000000025A418 string=0x000000000025A41C ""
 *   insn=0x000000000025A420 string=0x000000000025A424 ""
 *   insn=0x000000000025A424 string=0x000000000025A428 ""
 *   insn=0x000000000025A430 string=0x000000000025A434 "i:A"
 *   insn=0x000000000025A434 string=0x000000000025A438 "?"
 *   insn=0x000000000025A43C string=0x000000000025A440 "`"
 *   insn=0x000000000025A440 string=0x000000000025A444 "h:"
 *   insn=0x000000000025A44C string=0x000000000025A450 "@"
 *   insn=0x000000000025A450 string=0x000000000025A454 ""
 *   insn=0x000000000025A454 string=0x000000000025A458 ""
 *   insn=0x000000000025A45C string=0x000000000025A460 ""
 *   insn=0x000000000025A460 string=0x000000000025A464 ""
 *   insn=0x000000000025A46C string=0x000000000025A470 "iRA"
 *   insn=0x000000000025A470 string=0x000000000025A474 "?"
 *   insn=0x000000000025A478 string=0x000000000025A47C "`"
 *   insn=0x000000000025A47C string=0x000000000025A480 "hR"
 *   insn=0x000000000025A488 string=0x000000000025A48C "@"
 *   insn=0x000000000025A48C string=0x000000000025A490 ""
 *   insn=0x000000000025A490 string=0x000000000025A494 ""
 *   insn=0x000000000025A498 string=0x000000000025A49C ""
 *   insn=0x000000000025A49C string=0x000000000025A4A0 ""
 *   insn=0x000000000025A4A8 string=0x000000000025A4AC "ijA"
 *   insn=0x000000000025A4AC string=0x000000000025A4B0 "?"
 *   insn=0x000000000025A4B4 string=0x000000000025A4B8 "`"
 *   insn=0x000000000025A4B8 string=0x000000000025A4BC "hj"
 *   insn=0x000000000025A4C4 string=0x000000000025A4C8 "@"
 *   insn=0x000000000025A4C8 string=0x000000000025A4CC ""
 *   insn=0x000000000025A4CC string=0x000000000025A4D0 ""
 *   insn=0x000000000025A4D4 string=0x000000000025A4D8 ""
 *   insn=0x000000000025A4D8 string=0x000000000025A4DC ""
 *   insn=0x000000000025A4E4 string=0x000000000025A4E8 "i"
 *   insn=0x000000000025A4E8 string=0x000000000025A4EC "?"
 *   insn=0x000000000025A4F0 string=0x000000000025A4F4 "`"
 *   insn=0x000000000025A4F4 string=0x000000000025A4F8 "h"
 *   insn=0x000000000025A500 string=0x000000000025A504 "@"
 *   insn=0x000000000025A504 string=0x000000000025A508 ""
 *   insn=0x000000000025A508 string=0x000000000025A50C ""
 *   insn=0x000000000025A510 string=0x000000000025A514 ""
 *   insn=0x000000000025A514 string=0x000000000025A518 ""
 *   insn=0x000000000025A520 string=0x000000000025A524 "i"
 *   insn=0x000000000025A524 string=0x000000000025A528 "?"
 *   insn=0x000000000025A52C string=0x000000000025A530 "`"
 *   insn=0x000000000025A530 string=0x000000000025A534 "h"
 *   insn=0x000000000025A53C string=0x000000000025A540 "@"
 *   insn=0x000000000025A540 string=0x000000000025A544 ""
 *   insn=0x000000000025A544 string=0x000000000025A548 ""
 *   insn=0x000000000025A54C string=0x000000000025A550 ""
 *   insn=0x000000000025A550 string=0x000000000025A554 ""
 *   insn=0x000000000025A55C string=0x000000000025A560 "i"
 *   insn=0x000000000025A560 string=0x000000000025A564 "?"
 *   insn=0x000000000025A568 string=0x000000000025A56C "`"
 *   insn=0x000000000025A56C string=0x000000000025A570 "h"
 *   insn=0x000000000025A578 string=0x000000000025A57C "@"
 *   insn=0x000000000025A57C string=0x000000000025A580 ""
 *   insn=0x000000000025A580 string=0x000000000025A584 ""
 *   insn=0x000000000025A588 string=0x000000000025A58C ""
 *   insn=0x000000000025A58C string=0x000000000025A590 ""
 *   insn=0x000000000025A59C string=0x000000000025A5A0 "h"
 *   insn=0x000000000025A5A4 string=0x000000000025A5A8 "`B"
 *   insn=0x000000000025A5B8 string=0x000000000025A5BC "\t@"
 *   insn=0x000000000025A5BC string=0x000000000025A5C0 "!yu"
 *   insn=0x000000000025A5C4 string=0x000000000025A5C8 "h"
 *   insn=0x000000000025A5DC string=0x000000000025A5E0 "h"
 *   insn=0x000000000025A5E8 string=0x000000000025A5EC "("
 *   insn=0x000000000025A5EC string=0x000000000025A5F0 "h"
 *   insn=0x000000000025A5F4 string=0x000000000025A5F8 "h"
 *   insn=0x000000000025A60C string=0x000000000025A610 "in"
 *   insn=0x000000000025A618 string=0x000000000025A61C "iz"
 *   insn=0x000000000025A61C string=0x000000000025A620 "h"
 *   insn=0x000000000025A624 string=0x000000000025A628 "i~"
 *   insn=0x000000000025A628 string=0x000000000025A62C "("
 *   insn=0x000000000025A630 string=0x000000000025A634 "i"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_DWORD *__fastcall Caver::CharControllerComponent::LoadFromProtobufMessage(
        Caver::CharControllerComponent *this,
        const Caver::Proto::Component *a2)
{
  _DWORD *result; // x0
  _DWORD *v5; // x20
  int v6; // w8
  int v7; // w8
  int v8; // w8
  int v9; // w8
  int v10; // w8
  int v11; // w8
  int v12; // w8
  int v13; // w8
  int v14; // w8
  int v15; // w8
  int v16; // w8
  int v17; // w8
  int v18; // w8
  int v19; // w8
  int v20; // w8
  int v21; // w8
  int v22; // w8
  int v23; // w8
  int v24; // w8
  int v25; // w8
  int v26; // w8
  int v27; // w8
  int v28; // w8
  int v29; // w8
  int v30; // w8
  int v31; // w8
  int v32; // w8
  int v33; // w8
  int v34; // w8
  __int64 v35; // x21
  _QWORD *v36; // x22
  __int64 v37; // t1
  int v38; // w8

  Caver::Component::LoadFromProtobufMessage(this, a2);
  result = (_DWORD *)google::protobuf::internal::ExtensionSet::GetMessage(
                       (const Caver::Proto::Component *)((char *)a2 + 8),
                       Caver::Proto::CharControllerComponent::extension,
                       (const google::protobuf::MessageLite *)qword_6E9488);
  v5 = result;
  v6 = result[3];
  if ( *((_DWORD *)this + 30) != v6 )
  {
    result = (_DWORD *)*((_QWORD *)this + 16);
    *((_DWORD *)this + 30) = v6;
    *((_QWORD *)this + 16) = 0;
    if ( result )
    {
      v7 = result[2] - 1;
      result[2] = v7;
      if ( !v7 )
        result = (_DWORD *)(*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)result + 8LL))(result);
    }
  }
  v8 = v5[4];
  if ( *((_DWORD *)this + 36) != v8 )
  {
    result = (_DWORD *)*((_QWORD *)this + 19);
    *((_DWORD *)this + 36) = v8;
    *((_QWORD *)this + 19) = 0;
    if ( result )
    {
      v9 = result[2] - 1;
      result[2] = v9;
      if ( !v9 )
        result = (_DWORD *)(*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)result + 8LL))(result);
    }
  }
  v10 = v5[5];
  if ( *((_DWORD *)this + 42) != v10 )
  {
    result = (_DWORD *)*((_QWORD *)this + 22);
    *((_DWORD *)this + 42) = v10;
    *((_QWORD *)this + 22) = 0;
    if ( result )
    {
      v11 = result[2] - 1;
      result[2] = v11;
      if ( !v11 )
        result = (_DWORD *)(*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)result + 8LL))(result);
    }
  }
  v12 = v5[6];
  if ( *((_DWORD *)this + 48) != v12 )
  {
    result = (_DWORD *)*((_QWORD *)this + 25);
    *((_DWORD *)this + 48) = v12;
    *((_QWORD *)this + 25) = 0;
    if ( result )
    {
      v13 = result[2] - 1;
      result[2] = v13;
      if ( !v13 )
        result = (_DWORD *)(*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)result + 8LL))(result);
    }
  }
  v14 = v5[7];
  if ( *((_DWORD *)this + 54) != v14 )
  {
    result = (_DWORD *)*((_QWORD *)this + 28);
    *((_DWORD *)this + 54) = v14;
    *((_QWORD *)this + 28) = 0;
    if ( result )
    {
      v15 = result[2] - 1;
      result[2] = v15;
      if ( !v15 )
        result = (_DWORD *)(*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)result + 8LL))(result);
    }
  }
  v16 = v5[8];
  if ( *((_DWORD *)this + 60) != v16 )
  {
    result = (_DWORD *)*((_QWORD *)this + 31);
    *((_DWORD *)this + 60) = v16;
    *((_QWORD *)this + 31) = 0;
    if ( result )
    {
      v17 = result[2] - 1;
      result[2] = v17;
      if ( !v17 )
        result = (_DWORD *)(*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)result + 8LL))(result);
    }
  }
  v18 = v5[9];
  if ( *((_DWORD *)this + 66) != v18 )
  {
    result = (_DWORD *)*((_QWORD *)this + 34);
    *((_DWORD *)this + 66) = v18;
    *((_QWORD *)this + 34) = 0;
    if ( result )
    {
      v19 = result[2] - 1;
      result[2] = v19;
      if ( !v19 )
        result = (_DWORD *)(*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)result + 8LL))(result);
    }
  }
  v20 = v5[10];
  if ( *((_DWORD *)this + 72) != v20 )
  {
    result = (_DWORD *)*((_QWORD *)this + 37);
    *((_DWORD *)this + 72) = v20;
    *((_QWORD *)this + 37) = 0;
    if ( result )
    {
      v21 = result[2] - 1;
      result[2] = v21;
      if ( !v21 )
        result = (_DWORD *)(*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)result + 8LL))(result);
    }
  }
  v22 = v5[11];
  if ( *((_DWORD *)this + 78) != v22 )
  {
    result = (_DWORD *)*((_QWORD *)this + 40);
    *((_DWORD *)this + 78) = v22;
    *((_QWORD *)this + 40) = 0;
    if ( result )
    {
      v23 = result[2] - 1;
      result[2] = v23;
      if ( !v23 )
        result = (_DWORD *)(*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)result + 8LL))(result);
    }
  }
  v24 = v5[12];
  if ( *((_DWORD *)this + 84) != v24 )
  {
    result = (_DWORD *)*((_QWORD *)this + 43);
    *((_DWORD *)this + 84) = v24;
    *((_QWORD *)this + 43) = 0;
    if ( result )
    {
      v25 = result[2] - 1;
      result[2] = v25;
      if ( !v25 )
        result = (_DWORD *)(*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)result + 8LL))(result);
    }
  }
  v26 = v5[13];
  if ( *((_DWORD *)this + 90) != v26 )
  {
    result = (_DWORD *)*((_QWORD *)this + 46);
    *((_DWORD *)this + 90) = v26;
    *((_QWORD *)this + 46) = 0;
    if ( result )
    {
      v27 = result[2] - 1;
      result[2] = v27;
      if ( !v27 )
        result = (_DWORD *)(*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)result + 8LL))(result);
    }
  }
  v28 = v5[14];
  if ( *((_DWORD *)this + 96) != v28 )
  {
    result = (_DWORD *)*((_QWORD *)this + 49);
    *((_DWORD *)this + 96) = v28;
    *((_QWORD *)this + 49) = 0;
    if ( result )
    {
      v29 = result[2] - 1;
      result[2] = v29;
      if ( !v29 )
        result = (_DWORD *)(*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)result + 8LL))(result);
    }
  }
  v30 = v5[15];
  if ( *((_DWORD *)this + 104) != v30 )
  {
    result = (_DWORD *)*((_QWORD *)this + 53);
    *((_DWORD *)this + 104) = v30;
    *((_QWORD *)this + 53) = 0;
    if ( result )
    {
      v31 = result[2] - 1;
      result[2] = v31;
      if ( !v31 )
        result = (_DWORD *)(*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)result + 8LL))(result);
    }
  }
  v32 = v5[16];
  if ( *((_DWORD *)this + 110) != v32 )
  {
    result = (_DWORD *)*((_QWORD *)this + 56);
    *((_DWORD *)this + 110) = v32;
    *((_QWORD *)this + 56) = 0;
    if ( result )
    {
      v33 = result[2] - 1;
      result[2] = v33;
      if ( !v33 )
        result = (_DWORD *)(*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)result + 8LL))(result);
    }
  }
  v34 = v5[20];
  *((_DWORD *)this + 134) = v34;
  if ( v34 >= 1 )
  {
    v35 = 0;
    v36 = (_QWORD *)((char *)this + 464);
    do
    {
      v37 = *v36;
      v36 += 3;
      (*(void (**)(void))(v37 + 16))();
      ++v35;
      result = v36;
    }
    while ( v35 < *((int *)this + 134) );
  }
  v38 = v5[31];
  if ( (v38 & 0x10000) != 0 )
  {
    *((_DWORD *)this + 155) = v5[27];
    if ( (v38 & 0x8000) == 0 )
    {
LABEL_62:
      if ( (v38 & 0x20000) == 0 )
        goto LABEL_63;
      goto LABEL_69;
    }
  }
  else if ( (v38 & 0x8000) == 0 )
  {
    goto LABEL_62;
  }
  *((_DWORD *)this + 158) = v5[26];
  if ( (v38 & 0x20000) == 0 )
  {
LABEL_63:
    if ( (v38 & 0x40000) == 0 )
      goto LABEL_64;
    goto LABEL_70;
  }
LABEL_69:
  *((_DWORD *)this + 159) = v5[28];
  if ( (v38 & 0x40000) == 0 )
  {
LABEL_64:
    if ( (v38 & 0x80000) == 0 )
      return result;
    goto LABEL_65;
  }
LABEL_70:
  *((_DWORD *)this + 160) = v5[29];
  if ( (v38 & 0x80000) == 0 )
    return result;
LABEL_65:
  *((_DWORD *)this + 161) = v5[30];
  return result;
}

