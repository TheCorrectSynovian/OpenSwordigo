/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000272028
 * Mangled: _ZN5Caver19HeroEntityComponent17InitWithComponentEPKS0_
 * Demangled: Caver::HeroEntityComponent::InitWithComponent(Caver::HeroEntityComponent const*)
 *
 * Callers: 2
 *   0x0000000000201400  Caver::HeroEntityComponent::InitWithComponent(Caver::HeroEntityComponent const*)
 *   0x0000000000271E60  Caver::HeroEntityComponent::HeroEntityComponent(void)
 *
 * Callees: 2
 *   0x0000000000200290  Caver::EntityComponent::InitWithComponent(Caver::EntityComponent const*)
 *   0x000000000056A6A8  sub_56A6A8
 *
 * Referenced strings: 22
 *   insn=0x0000000000272040 string=0x0000000000272044 "`B"
 *   insn=0x0000000000272054 string=0x0000000000272058 "\n"
 *   insn=0x0000000000272054 string=0x0000000000272064 "u"
 *   insn=0x0000000000272058 string=0x000000000027205C "J"
 *   insn=0x000000000027205C string=0x0000000000272060 "\n"
 *   insn=0x0000000000272064 string=0x0000000000272068 "i"
 *   insn=0x0000000000272070 string=0x0000000000272074 ""
 *   insn=0x0000000000272078 string=0x000000000027207C "!"
 *   insn=0x0000000000272084 string=0x0000000000272088 "\t@"
 *   insn=0x0000000000272090 string=0x0000000000272094 ""
 *   insn=0x0000000000272098 string=0x000000000027209C " "
 *   insn=0x00000000002720A4 string=0x00000000002720A8 "\n"
 *   insn=0x00000000002720A4 string=0x00000000002720B4 "t"
 *   insn=0x00000000002720A8 string=0x00000000002720AC "J"
 *   insn=0x00000000002720AC string=0x00000000002720B0 "\n"
 *   insn=0x00000000002720B4 string=0x00000000002720B8 "i"
 *   insn=0x00000000002720C0 string=0x00000000002720C4 ""
 *   insn=0x00000000002720C8 string=0x00000000002720CC "!"
 *   insn=0x00000000002720D4 string=0x00000000002720D8 "\t@"
 *   insn=0x00000000002720E0 string=0x00000000002720E4 ""
 *   insn=0x0000000000272104 string=0x0000000000272108 "@"
 *   insn=0x0000000000272130 string=0x0000000000272134 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::HeroEntityComponent::InitWithComponent(
        Caver::HeroEntityComponent *this,
        const Caver::HeroEntityComponent *a2)
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

  Caver::EntityComponent::InitWithComponent();
  result = sub_56A6A8((char *)this + 336);
  v6 = *((_QWORD *)a2 + 43);
  v5 = *((_QWORD *)a2 + 44);
  if ( v5 )
    ++*(_QWORD *)(v5 + 8);
  v7 = (_QWORD *)*((_QWORD *)this + 44);
  *((_QWORD *)this + 43) = v6;
  *((_QWORD *)this + 44) = v5;
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
        v11 = *((_QWORD *)a2 + 45);
        v10 = *((_QWORD *)a2 + 46);
        if ( !v10 )
          goto LABEL_8;
        goto LABEL_7;
      }
    }
  }
  v11 = *((_QWORD *)a2 + 45);
  v10 = *((_QWORD *)a2 + 46);
  if ( v10 )
LABEL_7:
    ++*(_QWORD *)(v10 + 8);
LABEL_8:
  v12 = (_QWORD *)*((_QWORD *)this + 46);
  *((_QWORD *)this + 45) = v11;
  *((_QWORD *)this + 46) = v10;
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

