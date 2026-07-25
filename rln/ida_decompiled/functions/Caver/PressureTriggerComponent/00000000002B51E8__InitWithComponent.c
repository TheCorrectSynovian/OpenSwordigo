/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002B51E8
 * Mangled: _ZN5Caver24PressureTriggerComponent17InitWithComponentEPKS0_
 * Demangled: Caver::PressureTriggerComponent::InitWithComponent(Caver::PressureTriggerComponent const*)
 *
 * Callers: 1
 *   0x00000000001FD720  Caver::PressureTriggerComponent::InitWithComponent(Caver::PressureTriggerComponent const*)
 *
 * Callees: 1
 *   0x000000000056A6A8  sub_56A6A8
 *
 * Referenced strings: 48
 *   insn=0x00000000002B5204 string=0x00000000002B5208 "`"
 *   insn=0x00000000002B5208 string=0x00000000002B520C "h""
 *   insn=0x00000000002B520C string=0x00000000002B5210 "&"
 *   insn=0x00000000002B5214 string=0x00000000002B5218 "`""
 *   insn=0x00000000002B521C string=0x00000000002B5220 "hz"
 *   insn=0x00000000002B5224 string=0x00000000002B5228 "hb"
 *   insn=0x00000000002B5234 string=0x00000000002B5238 "\n"
 *   insn=0x00000000002B5234 string=0x00000000002B5244 "uN@"
 *   insn=0x00000000002B5238 string=0x00000000002B523C "J"
 *   insn=0x00000000002B523C string=0x00000000002B5240 "\n"
 *   insn=0x00000000002B5244 string=0x00000000002B5248 "i"\t"
 *   insn=0x00000000002B5250 string=0x00000000002B5254 ""
 *   insn=0x00000000002B5258 string=0x00000000002B525C "!"
 *   insn=0x00000000002B5264 string=0x00000000002B5268 "\t@"
 *   insn=0x00000000002B5270 string=0x00000000002B5274 ""
 *   insn=0x00000000002B5284 string=0x00000000002B5288 "\n"
 *   insn=0x00000000002B5284 string=0x00000000002B5294 "uV@"
 *   insn=0x00000000002B5288 string=0x00000000002B528C "J"
 *   insn=0x00000000002B528C string=0x00000000002B5290 "\n"
 *   insn=0x00000000002B5294 string=0x00000000002B5298 "i"\n"
 *   insn=0x00000000002B5298 string=0x00000000002B529C "5"
 *   insn=0x00000000002B529C string=0x00000000002B52E0 "`"
 *   insn=0x00000000002B52A0 string=0x00000000002B52A4 ""
 *   insn=0x00000000002B52B4 string=0x00000000002B52B8 "\t@"
 *   insn=0x00000000002B52C0 string=0x00000000002B52C4 ""
 *   insn=0x00000000002B52D4 string=0x00000000002B52D8 "@"
 *   insn=0x00000000002B52F0 string=0x00000000002B52F4 "\n"
 *   insn=0x00000000002B52F0 string=0x00000000002B5300 "ub@"
 *   insn=0x00000000002B52F4 string=0x00000000002B52F8 "J"
 *   insn=0x00000000002B52F8 string=0x00000000002B52FC "\n"
 *   insn=0x00000000002B5300 string=0x00000000002B5304 "i"
 *   insn=0x00000000002B530C string=0x00000000002B5310 ""
 *   insn=0x00000000002B5314 string=0x00000000002B5318 "!"
 *   insn=0x00000000002B5320 string=0x00000000002B5324 "\t@"
 *   insn=0x00000000002B532C string=0x00000000002B5330 ""
 *   insn=0x00000000002B5340 string=0x00000000002B5344 "\n"
 *   insn=0x00000000002B5340 string=0x00000000002B5350 "tj@"
 *   insn=0x00000000002B5344 string=0x00000000002B5348 "J"
 *   insn=0x00000000002B5348 string=0x00000000002B534C "\n"
 *   insn=0x00000000002B5350 string=0x00000000002B5354 "i"
 *   insn=0x00000000002B535C string=0x00000000002B5360 ""
 *   insn=0x00000000002B5364 string=0x00000000002B5368 "!"
 *   insn=0x00000000002B5370 string=0x00000000002B5374 "\t@"
 *   insn=0x00000000002B537C string=0x00000000002B5380 ""
 *   insn=0x00000000002B5384 string=0x00000000002B5388 "`"
 *   insn=0x00000000002B53A0 string=0x00000000002B53A4 "@"
 *   insn=0x00000000002B53BC string=0x00000000002B53C0 "@"
 *   insn=0x00000000002B53E8 string=0x00000000002B53EC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::PressureTriggerComponent::InitWithComponent(
        Caver::PressureTriggerComponent *this,
        const Caver::PressureTriggerComponent *a2)
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
  _QWORD *v22; // x20
  __int64 v23; // x8
  __int64 v24; // x8

  *((_DWORD *)this + 8) = *((_DWORD *)a2 + 8);
  sub_56A6A8((char *)this + 56);
  *((_DWORD *)this + 30) = *((_DWORD *)a2 + 30);
  *((_BYTE *)this + 216) = *((_BYTE *)a2 + 216);
  sub_56A6A8((char *)this + 136);
  v5 = *((_QWORD *)a2 + 18);
  v4 = *((_QWORD *)a2 + 19);
  if ( v4 )
    ++*(_QWORD *)(v4 + 8);
  v6 = (_QWORD *)*((_QWORD *)this + 19);
  *((_QWORD *)this + 18) = v5;
  *((_QWORD *)this + 19) = v4;
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
        v10 = *((_QWORD *)a2 + 20);
        v9 = *((_QWORD *)a2 + 21);
        if ( !v9 )
          goto LABEL_8;
        goto LABEL_7;
      }
    }
  }
  v10 = *((_QWORD *)a2 + 20);
  v9 = *((_QWORD *)a2 + 21);
  if ( v9 )
LABEL_7:
    ++*(_QWORD *)(v9 + 8);
LABEL_8:
  v11 = (_QWORD *)*((_QWORD *)this + 21);
  *((_QWORD *)this + 20) = v10;
  *((_QWORD *)this + 21) = v9;
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
  result = sub_56A6A8((char *)this + 176);
  v16 = *((_QWORD *)a2 + 23);
  v15 = *((_QWORD *)a2 + 24);
  if ( v15 )
    ++*(_QWORD *)(v15 + 8);
  v17 = (_QWORD *)*((_QWORD *)this + 24);
  *((_QWORD *)this + 23) = v16;
  *((_QWORD *)this + 24) = v15;
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
        v21 = *((_QWORD *)a2 + 25);
        v20 = *((_QWORD *)a2 + 26);
        if ( !v20 )
          goto LABEL_19;
        goto LABEL_18;
      }
    }
  }
  v21 = *((_QWORD *)a2 + 25);
  v20 = *((_QWORD *)a2 + 26);
  if ( v20 )
LABEL_18:
    ++*(_QWORD *)(v20 + 8);
LABEL_19:
  v22 = (_QWORD *)*((_QWORD *)this + 26);
  *((_QWORD *)this + 25) = v21;
  *((_QWORD *)this + 26) = v20;
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
        return (*(__int64 (__fastcall **)(_QWORD *))(*v22 + 24LL))(v22);
    }
  }
  return result;
}

