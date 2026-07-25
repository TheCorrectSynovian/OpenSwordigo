/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000048B9D8
 * Mangled: _ZN5Caver16RenderingContext10AddProgramEjRKN5boost10shared_ptrINS_16RenderingProgramEEE
 * Demangled: Caver::RenderingContext::AddProgram(uint,boost::shared_ptr<Caver::RenderingProgram> const&)
 *
 * Callers: 1
 *   0x00000000001F6F70  Caver::RenderingContext::AddProgram(uint,boost::shared_ptr<Caver::RenderingProgram> const&)
 *
 * Callees: 2
 *   0x00000000001F5310  std::map<uint,boost::shared_ptr<Caver::RenderingProgram>,std::less<uint>,std::allocator<std::pair<uint const,boost::shared_ptr<Caver::RenderingProgram>>>>::operator[](uint const&)
 *   0x00000000001F62D0  .__stack_chk_fail
 *
 * Referenced strings: 20
 *   insn=0x000000000048B9E4 string=0x000000000048B9E8 "T"
 *   insn=0x000000000048BA00 string=0x000000000048BA04 "C"
 *   insn=0x000000000048BA04 string=0x000000000048BA08 "i"@"
 *   insn=0x000000000048BA04 string=0x00000000001F5310 "P'"
 *   insn=0x000000000048BA0C string=0x000000000048BA10 "\n"
 *   insn=0x000000000048BA10 string=0x000000000048BA14 "J"
 *   insn=0x000000000048BA14 string=0x000000000048BA18 "\n"
 *   insn=0x000000000048BA1C string=0x000000000048BA20 "\t "
 *   insn=0x000000000048BA20 string=0x000000000048BA24 "3"
 *   insn=0x000000000048BA24 string=0x000000000048BA28 "h"
 *   insn=0x000000000048BA28 string=0x000000000048BA2C ""
 *   insn=0x000000000048BA2C string=0x000000000048BA30 "h"
 *   insn=0x000000000048BA34 string=0x000000000048BA38 "h"
 *   insn=0x000000000048BA3C string=0x000000000048BA40 "\t@"
 *   insn=0x000000000048BA44 string=0x000000000048BA48 "h\n@"
 *   insn=0x000000000048BA48 string=0x000000000048BA4C ""
 *   insn=0x000000000048BA4C string=0x000000000048BA50 "h\n"
 *   insn=0x000000000048BA54 string=0x000000000048BA58 "h"
 *   insn=0x000000000048BA5C string=0x000000000048BA60 "@"
 *   insn=0x000000000048BA88 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall Caver::RenderingContext::AddProgram(__int64 a1, __int64 a2, __int64 *a3)
{
  _QWORD *result; // x0
  __int64 v5; // x8
  __int64 v6; // x9
  _QWORD *v7; // x19
  __int64 v8; // x8
  __int64 v9; // x8

  _ReadStatusReg(TPIDR_EL0);
  result = (_QWORD *)std::map<unsigned int,boost::shared_ptr<Caver::RenderingProgram>>::operator[]();
  v6 = *a3;
  v5 = a3[1];
  if ( v5 )
    ++*(_QWORD *)(v5 + 8);
  v7 = (_QWORD *)result[1];
  *result = v6;
  result[1] = v5;
  if ( v7 )
  {
    v8 = v7[1] - 1LL;
    v7[1] = v8;
    if ( !v8 )
    {
      result = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD *))(*v7 + 16LL))(v7);
      v9 = v7[2] - 1LL;
      v7[2] = v9;
      if ( !v9 )
        return (_QWORD *)(*(__int64 (__fastcall **)(_QWORD *))(*v7 + 24LL))(v7);
    }
  }
  return result;
}

