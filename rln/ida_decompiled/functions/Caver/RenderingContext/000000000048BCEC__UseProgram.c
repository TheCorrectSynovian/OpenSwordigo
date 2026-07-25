/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000048BCEC
 * Mangled: _ZN5Caver16RenderingContext10UseProgramEj
 * Demangled: Caver::RenderingContext::UseProgram(uint)
 *
 * Callers: 1
 *   0x00000000001F5ED0  Caver::RenderingContext::UseProgram(uint)
 *
 * Callees: 9
 *   0x00000000001F3C70  .glEnable
 *   0x00000000001F5310  std::map<uint,boost::shared_ptr<Caver::RenderingProgram>,std::less<uint>,std::allocator<std::pair<uint const,boost::shared_ptr<Caver::RenderingProgram>>>>::operator[](uint const&)
 *   0x00000000001F5860  .glDisable
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FC350  Caver::RenderingContext::UseProgram(boost::shared_ptr<Caver::RenderingProgram> const&)
 *   0x00000000001FD1E0  Caver::RenderingContext::SetEnabledVertexAttribArraysImpl(uint *,int)
 *   0x0000000000201760  .memcpy
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 61
 *   insn=0x000000000048BCFC string=0x000000000048BD00 "U"
 *   insn=0x000000000048BD18 string=0x000000000048BD1C "}"
 *   insn=0x000000000048BD1C string=0x000000000048BD20 "L@"
 *   insn=0x000000000048BD1C string=0x00000000001F5310 "P'"
 *   insn=0x000000000048BD28 string=0x000000000048BD2C "h"
 *   insn=0x000000000048BD2C string=0x000000000048BD30 ""
 *   insn=0x000000000048BD30 string=0x000000000048BD34 "h"
 *   insn=0x000000000048BD40 string=0x000000000048BD44 "3"
 *   insn=0x000000000048BD40 string=0x00000000001FC350 "0'"
 *   insn=0x000000000048BD44 string=0x000000000048BD48 "h"
 *   insn=0x000000000048BD48 string=0x000000000048BD4C ""
 *   insn=0x000000000048BD4C string=0x000000000048BD50 "h"
 *   insn=0x000000000048BD54 string=0x000000000048BD58 "h"
 *   insn=0x000000000048BD5C string=0x000000000048BD60 "\t@"
 *   insn=0x000000000048BD64 string=0x000000000048BD68 "h\n@"
 *   insn=0x000000000048BD68 string=0x000000000048BD6C ""
 *   insn=0x000000000048BD6C string=0x000000000048BD70 "h\n"
 *   insn=0x000000000048BD74 string=0x000000000048BD78 "h"
 *   insn=0x000000000048BD7C string=0x000000000048BD80 "@"
 *   insn=0x000000000048BD94 string=0x000000000048BDAC "I"
 *   insn=0x000000000048BDAC string=0x00000000001F62D0 "0'"
 *   insn=0x000000000048BDB0 string=0x000000000048BDB4 "3"
 *   insn=0x000000000048BDB4 string=0x000000000048BDB8 "h"
 *   insn=0x000000000048BDB8 string=0x000000000048BDBC ""
 *   insn=0x000000000048BDBC string=0x000000000048BDC0 "h"
 *   insn=0x000000000048BDC4 string=0x000000000048BDC8 "h"
 *   insn=0x000000000048BDC8 string=0x000000000048BDCC "\t@"
 *   insn=0x000000000048BDD4 string=0x000000000048BDD8 "h\n@"
 *   insn=0x000000000048BDD8 string=0x000000000048BDDC ""
 *   insn=0x000000000048BDDC string=0x000000000048BDE0 "h\n"
 *   insn=0x000000000048BDE4 string=0x000000000048BDE8 "h"
 *   insn=0x000000000048BDE8 string=0x000000000048BDEC "@"
 *   insn=0x000000000048BDFC string=0x000000000048BE00 "S\t"
 *   insn=0x000000000048BE14 string=0x000000000048BE18 "V"
 *   insn=0x000000000048BE2C string=0x000000000048BE30 "i"
 *   insn=0x000000000048BE40 string=0x000000000048BE44 "*"
 *   insn=0x000000000048BE40 string=0x000000000048BE50 "u"@"
 *   insn=0x000000000048BE44 string=0x000000000048BE48 "J"
 *   insn=0x000000000048BE48 string=0x000000000048BE4C "*"
 *   insn=0x000000000048BE50 string=0x000000000048BE54 "h"
 *   insn=0x000000000048BE54 string=0x000000000048BE58 "5"
 *   insn=0x000000000048BE5C string=0x000000000048BE60 ""
 *   insn=0x000000000048BE70 string=0x000000000048BE74 "\t@"
 *   insn=0x000000000048BE7C string=0x000000000048BE80 ""
 *   insn=0x000000000048BE90 string=0x000000000048BE94 "@"
 *   insn=0x000000000048BE9C string=0x000000000048BEA0 "i"
 *   insn=0x000000000048BEA0 string=0x000000000048BEA4 "Q@9"
 *   insn=0x000000000048BEA8 string=0x000000000048BEAC "@"
 *   insn=0x000000000048BEAC string=0x000000000048BEB0 "i"
 *   insn=0x000000000048BEB0 string=0x000000000048BEB4 "h"
 *   insn=0x000000000048BEBC string=0x000000000048BEC0 " "
 *   insn=0x000000000048BEBC string=0x000000000048BECC " "
 *   insn=0x000000000048BEC0 string=0x000000000048BEC4 "k"
 *   insn=0x000000000048BEC4 string=0x00000000001F3C70 "P'"
 *   insn=0x000000000048BECC string=0x000000000048BED0 "d"
 *   insn=0x000000000048BED0 string=0x00000000001F5860 "P'"
 *   insn=0x000000000048BEF8 string=0x000000000048BEFC "h"
 *   insn=0x000000000048BEF8 string=0x00000000001FD1E0 "0'"
 *   insn=0x000000000048BF00 string=0x000000000048BF04 "a"
 *   insn=0x000000000048BF04 string=0x000000000048BF08 "h"
 *   insn=0x000000000048BF08 string=0x000000000048BF0C "h"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::RenderingContext::UseProgram(Caver::RenderingContext *this)
{
  _QWORD *v1; // x19
  __int64 v2; // x8
  __int64 v3; // x8

  _ReadStatusReg(TPIDR_EL0);
  v1 = *(_QWORD **)(std::map<unsigned int,boost::shared_ptr<Caver::RenderingProgram>>::operator[]() + 8);
  if ( v1 )
    ++v1[1];
  Caver::RenderingContext::UseProgram();
  if ( v1 )
  {
    v2 = v1[1] - 1LL;
    v1[1] = v2;
    if ( !v2 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v1 + 16LL))(v1);
      v3 = v1[2] - 1LL;
      v1[2] = v3;
      if ( !v3 )
        (*(void (__fastcall **)(_QWORD *))(*v1 + 24LL))(v1);
    }
  }
}

