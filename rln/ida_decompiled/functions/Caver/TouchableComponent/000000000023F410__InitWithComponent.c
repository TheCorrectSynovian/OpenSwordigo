/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000023F410
 * Mangled: _ZN5Caver18TouchableComponent17InitWithComponentEPKS0_
 * Demangled: Caver::TouchableComponent::InitWithComponent(Caver::TouchableComponent const*)
 *
 * Callers: 1
 *   0x00000000001F9AA0  Caver::TouchableComponent::InitWithComponent(Caver::TouchableComponent const*)
 *
 * Callees: 1
 *   0x000000000056A6A8  sub_56A6A8
 *
 * Referenced strings: 25
 *   insn=0x000000000023F42C string=0x000000000023F430 "`"
 *   insn=0x000000000023F430 string=0x000000000023F434 "h""
 *   insn=0x000000000023F43C string=0x000000000023F440 "`"
 *   insn=0x000000000023F444 string=0x000000000023F448 "hr"
 *   insn=0x000000000023F454 string=0x000000000023F458 "\n"
 *   insn=0x000000000023F454 string=0x000000000023F464 "uJ@"
 *   insn=0x000000000023F458 string=0x000000000023F45C "J"
 *   insn=0x000000000023F45C string=0x000000000023F460 "\n"
 *   insn=0x000000000023F464 string=0x000000000023F468 "i"
 *   insn=0x000000000023F470 string=0x000000000023F474 ""
 *   insn=0x000000000023F478 string=0x000000000023F47C "!"
 *   insn=0x000000000023F484 string=0x000000000023F488 "\t@"
 *   insn=0x000000000023F490 string=0x000000000023F494 ""
 *   insn=0x000000000023F498 string=0x000000000023F49C " "
 *   insn=0x000000000023F4A4 string=0x000000000023F4A8 "\n"
 *   insn=0x000000000023F4A4 string=0x000000000023F4B4 "tR@"
 *   insn=0x000000000023F4A8 string=0x000000000023F4AC "J"
 *   insn=0x000000000023F4AC string=0x000000000023F4B0 "\n"
 *   insn=0x000000000023F4B4 string=0x000000000023F4B8 "i"
 *   insn=0x000000000023F4C0 string=0x000000000023F4C4 ""
 *   insn=0x000000000023F4C8 string=0x000000000023F4CC "!"
 *   insn=0x000000000023F4D4 string=0x000000000023F4D8 "\t@"
 *   insn=0x000000000023F4E0 string=0x000000000023F4E4 ""
 *   insn=0x000000000023F504 string=0x000000000023F508 "@"
 *   insn=0x000000000023F530 string=0x000000000023F534 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::TouchableComponent::InitWithComponent(
        Caver::TouchableComponent *this,
        const Caver::TouchableComponent *a2)
{
  __int64 result; // x0
  __int64 v5; // x8
  __int64 v6; // x9
  _QWORD *v7; // x21
  __int64 v8; // x8
  __int64 v9; // x8
  __int64 v10; // x8
  __int64 v11; // x9
  _QWORD *v12; // x20
  __int64 v13; // x8
  __int64 v14; // x8

  *((_DWORD *)this + 8) = *((_DWORD *)a2 + 8);
  sub_56A6A8((char *)this + 56);
  *((_DWORD *)this + 28) = *((_DWORD *)a2 + 28);
  result = sub_56A6A8((char *)this + 128);
  v6 = *((_QWORD *)a2 + 17);
  v5 = *((_QWORD *)a2 + 18);
  if ( v5 )
    ++*(_QWORD *)(v5 + 8);
  v7 = (_QWORD *)*((_QWORD *)this + 18);
  *((_QWORD *)this + 17) = v6;
  *((_QWORD *)this + 18) = v5;
  if ( v7 )
  {
    v8 = v7[1] - 1LL;
    v7[1] = v8;
    if ( !v8 )
    {
      result = (*(__int64 (__fastcall **)(_QWORD *))(*v7 + 16LL))(v7);
      v9 = v7[2] - 1LL;
      v7[2] = v9;
      if ( !v9 )
      {
        result = (*(__int64 (__fastcall **)(_QWORD *))(*v7 + 24LL))(v7);
        v11 = *((_QWORD *)a2 + 19);
        v10 = *((_QWORD *)a2 + 20);
        if ( !v10 )
          goto LABEL_8;
        goto LABEL_7;
      }
    }
  }
  v11 = *((_QWORD *)a2 + 19);
  v10 = *((_QWORD *)a2 + 20);
  if ( v10 )
LABEL_7:
    ++*(_QWORD *)(v10 + 8);
LABEL_8:
  v12 = (_QWORD *)*((_QWORD *)this + 20);
  *((_QWORD *)this + 19) = v11;
  *((_QWORD *)this + 20) = v10;
  if ( v12 )
  {
    v13 = v12[1] - 1LL;
    v12[1] = v13;
    if ( !v13 )
    {
      result = (*(__int64 (__fastcall **)(_QWORD *))(*v12 + 16LL))(v12);
      v14 = v12[2] - 1LL;
      v12[2] = v14;
      if ( !v14 )
        return (*(__int64 (__fastcall **)(_QWORD *))(*v12 + 24LL))(v12);
    }
  }
  return result;
}

