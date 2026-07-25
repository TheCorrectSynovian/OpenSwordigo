/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000028F9C4
 * Mangled: _ZN5Caver14SpellComponent17InitWithComponentEPKS0_
 * Demangled: Caver::SpellComponent::InitWithComponent(Caver::SpellComponent const*)
 *
 * Callers: 1
 *   0x00000000001F9DF0  Caver::SpellComponent::InitWithComponent(Caver::SpellComponent const*)
 *
 * Callees: 1
 *   0x000000000056A6A8  sub_56A6A8
 *
 * Referenced strings: 26
 *   insn=0x000000000028F9E0 string=0x000000000028F9E4 "`"
 *   insn=0x000000000028F9E4 string=0x000000000028F9E8 "h""
 *   insn=0x000000000028F9E8 string=0x000000000028F9EC "/k"
 *   insn=0x000000000028F9EC string=0x000000000028F9F0 "`B"
 *   insn=0x000000000028F9F4 string=0x000000000028F9F8 ",k"
 *   insn=0x000000000028FA00 string=0x000000000028FA04 "\n"
 *   insn=0x000000000028FA00 string=0x000000000028FA10 "uR@"
 *   insn=0x000000000028FA04 string=0x000000000028FA08 "J"
 *   insn=0x000000000028FA08 string=0x000000000028FA0C "\n"
 *   insn=0x000000000028FA10 string=0x000000000028FA14 "i"
 *   insn=0x000000000028FA1C string=0x000000000028FA20 ""
 *   insn=0x000000000028FA24 string=0x000000000028FA28 "!"
 *   insn=0x000000000028FA30 string=0x000000000028FA34 "\t@"
 *   insn=0x000000000028FA3C string=0x000000000028FA40 ""
 *   insn=0x000000000028FA44 string=0x000000000028FA48 " "
 *   insn=0x000000000028FA50 string=0x000000000028FA54 "\n"
 *   insn=0x000000000028FA50 string=0x000000000028FA60 "tZ@"
 *   insn=0x000000000028FA54 string=0x000000000028FA58 "J"
 *   insn=0x000000000028FA58 string=0x000000000028FA5C "\n"
 *   insn=0x000000000028FA60 string=0x000000000028FA64 "i"
 *   insn=0x000000000028FA6C string=0x000000000028FA70 ""
 *   insn=0x000000000028FA74 string=0x000000000028FA78 "!"
 *   insn=0x000000000028FA80 string=0x000000000028FA84 "\t@"
 *   insn=0x000000000028FA8C string=0x000000000028FA90 ""
 *   insn=0x000000000028FAB0 string=0x000000000028FAB4 "@"
 *   insn=0x000000000028FADC string=0x000000000028FAE0 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::SpellComponent::InitWithComponent(
        Caver::SpellComponent *this,
        const Caver::SpellComponent *a2)
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
  result = sub_56A6A8((char *)this + 144);
  v6 = *((_QWORD *)a2 + 19);
  v5 = *((_QWORD *)a2 + 20);
  if ( v5 )
    ++*(_QWORD *)(v5 + 8);
  v7 = (_QWORD *)*((_QWORD *)this + 20);
  *((_QWORD *)this + 19) = v6;
  *((_QWORD *)this + 20) = v5;
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
        v11 = *((_QWORD *)a2 + 21);
        v10 = *((_QWORD *)a2 + 22);
        if ( !v10 )
          goto LABEL_8;
        goto LABEL_7;
      }
    }
  }
  v11 = *((_QWORD *)a2 + 21);
  v10 = *((_QWORD *)a2 + 22);
  if ( v10 )
LABEL_7:
    ++*(_QWORD *)(v10 + 8);
LABEL_8:
  v12 = (_QWORD *)*((_QWORD *)this + 22);
  *((_QWORD *)this + 21) = v11;
  *((_QWORD *)this + 22) = v10;
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

