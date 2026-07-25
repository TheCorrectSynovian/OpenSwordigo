/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000027AF5C
 * Mangled: _ZN5Caver22MonsterEntityComponent17InitWithComponentEPKS0_
 * Demangled: Caver::MonsterEntityComponent::InitWithComponent(Caver::MonsterEntityComponent const*)
 *
 * Callers: 1
 *   0x0000000000203E20  Caver::MonsterEntityComponent::InitWithComponent(Caver::MonsterEntityComponent const*)
 *
 * Callees: 2
 *   0x0000000000200290  Caver::EntityComponent::InitWithComponent(Caver::EntityComponent const*)
 *   0x000000000056A6A8  sub_56A6A8
 *
 * Referenced strings: 44
 *   insn=0x000000000027AF74 string=0x000000000027AF78 "`"
 *   insn=0x000000000027AF88 string=0x000000000027AF8C "\n"
 *   insn=0x000000000027AF88 string=0x000000000027AF98 "u"
 *   insn=0x000000000027AF8C string=0x000000000027AF90 "J"
 *   insn=0x000000000027AF90 string=0x000000000027AF94 "\n"
 *   insn=0x000000000027AF98 string=0x000000000027AF9C "i"
 *   insn=0x000000000027AFA4 string=0x000000000027AFA8 ""
 *   insn=0x000000000027AFAC string=0x000000000027AFB0 "!"
 *   insn=0x000000000027AFB8 string=0x000000000027AFBC "\t@"
 *   insn=0x000000000027AFC4 string=0x000000000027AFC8 ""
 *   insn=0x000000000027AFD8 string=0x000000000027AFDC "\n"
 *   insn=0x000000000027AFD8 string=0x000000000027AFE8 "u"
 *   insn=0x000000000027AFDC string=0x000000000027AFE0 "J"
 *   insn=0x000000000027AFE0 string=0x000000000027AFE4 "\n"
 *   insn=0x000000000027AFE8 string=0x000000000027AFEC "i"
 *   insn=0x000000000027AFEC string=0x000000000027AFF0 "5"
 *   insn=0x000000000027AFF0 string=0x000000000027B034 "`b"
 *   insn=0x000000000027AFF4 string=0x000000000027AFF8 ""
 *   insn=0x000000000027B008 string=0x000000000027B00C "\t@"
 *   insn=0x000000000027B014 string=0x000000000027B018 ""
 *   insn=0x000000000027B028 string=0x000000000027B02C "@"
 *   insn=0x000000000027B044 string=0x000000000027B048 "\n"
 *   insn=0x000000000027B044 string=0x000000000027B054 "u"
 *   insn=0x000000000027B048 string=0x000000000027B04C "J"
 *   insn=0x000000000027B04C string=0x000000000027B050 "\n"
 *   insn=0x000000000027B054 string=0x000000000027B058 "i""
 *   insn=0x000000000027B060 string=0x000000000027B064 ""
 *   insn=0x000000000027B068 string=0x000000000027B06C "!"
 *   insn=0x000000000027B074 string=0x000000000027B078 "\t@"
 *   insn=0x000000000027B080 string=0x000000000027B084 ""
 *   insn=0x000000000027B094 string=0x000000000027B098 "\n"
 *   insn=0x000000000027B094 string=0x000000000027B0A4 "u"
 *   insn=0x000000000027B098 string=0x000000000027B09C "J"
 *   insn=0x000000000027B09C string=0x000000000027B0A0 "\n"
 *   insn=0x000000000027B0A4 string=0x000000000027B0A8 "i""
 *   insn=0x000000000027B0A8 string=0x000000000027B0AC "5"
 *   insn=0x000000000027B0B0 string=0x000000000027B0B4 ""
 *   insn=0x000000000027B0C4 string=0x000000000027B0C8 "\t@"
 *   insn=0x000000000027B0D0 string=0x000000000027B0D4 ""
 *   insn=0x000000000027B0E4 string=0x000000000027B0E8 "@"
 *   insn=0x000000000027B0F0 string=0x000000000027B0F4 "hb"
 *   insn=0x000000000027B0F8 string=0x000000000027B0FC "hj"
 *   insn=0x000000000027B114 string=0x000000000027B118 "@"
 *   insn=0x000000000027B130 string=0x000000000027B134 "@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::MonsterEntityComponent::InitWithComponent(
        Caver::MonsterEntityComponent *this,
        const Caver::MonsterEntityComponent *a2)
{
  __int64 v4; // x8
  __int64 v5; // x9
  _QWORD *v6; // x21
  __int64 v7; // x8
  __int64 v8; // x8
  __int64 v9; // x8
  __int64 v10; // x9
  _QWORD *v11; // x21
  __int64 v12; // x8
  __int64 v13; // x8
  __int64 result; // x0
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

  Caver::EntityComponent::InitWithComponent();
  sub_56A6A8((char *)this + 304);
  v5 = *((_QWORD *)a2 + 39);
  v4 = *((_QWORD *)a2 + 40);
  if ( v4 )
    ++*(_QWORD *)(v4 + 8);
  v6 = (_QWORD *)*((_QWORD *)this + 40);
  *((_QWORD *)this + 39) = v5;
  *((_QWORD *)this + 40) = v4;
  if ( v6 )
  {
    v7 = v6[1] - 1LL;
    v6[1] = v7;
    if ( !v7 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v6 + 16LL))(v6);
      v8 = v6[2] - 1LL;
      v6[2] = v8;
      if ( !v8 )
      {
        (*(void (__fastcall **)(_QWORD *))(*v6 + 24LL))(v6);
        v10 = *((_QWORD *)a2 + 41);
        v9 = *((_QWORD *)a2 + 42);
        if ( !v9 )
          goto LABEL_8;
        goto LABEL_7;
      }
    }
  }
  v10 = *((_QWORD *)a2 + 41);
  v9 = *((_QWORD *)a2 + 42);
  if ( v9 )
LABEL_7:
    ++*(_QWORD *)(v9 + 8);
LABEL_8:
  v11 = (_QWORD *)*((_QWORD *)this + 42);
  *((_QWORD *)this + 41) = v10;
  *((_QWORD *)this + 42) = v9;
  if ( v11 )
  {
    v12 = v11[1] - 1LL;
    v11[1] = v12;
    if ( !v12 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v11 + 16LL))(v11);
      v13 = v11[2] - 1LL;
      v11[2] = v13;
      if ( !v13 )
        (*(void (__fastcall **)(_QWORD *))(*v11 + 24LL))(v11);
    }
  }
  result = sub_56A6A8((char *)this + 344);
  v16 = *((_QWORD *)a2 + 44);
  v15 = *((_QWORD *)a2 + 45);
  if ( v15 )
    ++*(_QWORD *)(v15 + 8);
  v17 = (_QWORD *)*((_QWORD *)this + 45);
  *((_QWORD *)this + 44) = v16;
  *((_QWORD *)this + 45) = v15;
  if ( v17 )
  {
    v18 = v17[1] - 1LL;
    v17[1] = v18;
    if ( !v18 )
    {
      result = (*(__int64 (__fastcall **)(_QWORD *))(*v17 + 16LL))(v17);
      v19 = v17[2] - 1LL;
      v17[2] = v19;
      if ( !v19 )
      {
        result = (*(__int64 (__fastcall **)(_QWORD *))(*v17 + 24LL))(v17);
        v21 = *((_QWORD *)a2 + 46);
        v20 = *((_QWORD *)a2 + 47);
        if ( !v20 )
          goto LABEL_19;
        goto LABEL_18;
      }
    }
  }
  v21 = *((_QWORD *)a2 + 46);
  v20 = *((_QWORD *)a2 + 47);
  if ( v20 )
LABEL_18:
    ++*(_QWORD *)(v20 + 8);
LABEL_19:
  v22 = (_QWORD *)*((_QWORD *)this + 47);
  *((_QWORD *)this + 46) = v21;
  *((_QWORD *)this + 47) = v20;
  if ( v22 )
  {
    v23 = v22[1] - 1LL;
    v22[1] = v23;
    if ( !v23 )
    {
      result = (*(__int64 (__fastcall **)(_QWORD *))(*v22 + 16LL))(v22);
      v24 = v22[2] - 1LL;
      v22[2] = v24;
      if ( !v24 )
        result = (*(__int64 (__fastcall **)(_QWORD *))(*v22 + 24LL))(v22);
    }
  }
  *((_BYTE *)this + 408) = *((_BYTE *)a2 + 408);
  *((_BYTE *)this + 410) = *((_BYTE *)a2 + 410);
  return result;
}

