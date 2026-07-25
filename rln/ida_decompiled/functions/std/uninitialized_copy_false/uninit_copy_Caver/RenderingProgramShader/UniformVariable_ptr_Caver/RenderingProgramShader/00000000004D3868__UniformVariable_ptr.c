/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004D3868
 * Mangled: _ZNSt20__uninitialized_copyILb0EE13__uninit_copyIPN5Caver22RenderingProgramShader15UniformVariableES5_EET0_T_S7_S6_
 * Demangled: std::__uninitialized_copy<false>::__uninit_copy<Caver::RenderingProgramShader::UniformVariable *,Caver::RenderingProgramShader::UniformVariable *>(Caver::RenderingProgramShader::UniformVariable *,Caver::RenderingProgramShader::UniformVariable *,Caver::RenderingProgramShader::UniformVariable *)
 *
 * Callers: 1
 *   0x00000000001FECB0  std::__uninitialized_copy<false>::__uninit_copy<Caver::RenderingProgramShader::UniformVariable *,Caver::RenderingProgramShader::UniformVariable *>(Caver::RenderingProgramShader::UniformVariable *,Caver::RenderingProgramShader::UniformVariable *,Caver::RenderingProgramShader::UniformVariable *)
 *
 * Callees: 29
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7210  Caver::RenderingContext::SetIdentityMatrix(void)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7330  boost::detail::shared_count::shared_count<Caver::GUITexturedRect>(Caver::GUITexturedRect *)
 *   0x00000000001F7380  boost::detail::shared_count::shared_count<Caver::GUIRoundedRect>(Caver::GUIRoundedRect *)
 *   0x00000000001F8300  Caver::GUIRoundedRect::InitWithTextureName(std::string const&)
 *   0x00000000001F8B80  Caver::GUITexturedRect::Draw(Caver::RenderingContext *)
 *   0x00000000001F9850  Caver::GUIView::DrawRect(Caver::RenderingContext *,Caver::Rectangle const&,Caver::Matrix4 const&)
 *   0x00000000001FBCC0  Caver::Matrix4::RotationZ(float)
 *   0x00000000001FD390  Caver::GUITexturedRect::InitWithTextureName(std::string const&,Caver::Vector2 const&)
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x00000000001FD850  Caver::GUITexturedRect::GUITexturedRect(void)
 *   0x00000000001FEBA0  Caver::RenderingContext::SetMatrix(Caver::Matrix4 const&)
 *   0x00000000001FEE30  Caver::GUIView::~GUIView()
 *   0x00000000001FFE90  C_Matrix4Mul(float const*,float const*,float *)
 *   0x0000000000200A70  Caver::GUIRoundedRect::GUIRoundedRect(void)
 *   0x00000000002023B0  Caver::GUIRoundedRect::Draw(Caver::RenderingContext *)
 *   0x0000000000202950  boost::detail::sp_enable_shared_from_this(...)
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x0000000000203620  Caver::RenderingContext::FillRect(Caver::Rectangle const&,Caver::Color const&,float)
 *   0x0000000000203B40  Caver::GUIView::GUIView(void)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 152
 *   insn=0x00000000004D387C string=0x00000000004D3880 "W"
 *   insn=0x00000000004D38A4 string=0x00000000004D38A8 "("
 *   insn=0x00000000004D38AC string=0x00000000004D38B0 ""
 *   insn=0x00000000004D38DC string=0x00000000004D38FC "u"
 *   insn=0x00000000004D38FC string=0x00000000001F62D0 "0'"
 *   insn=0x00000000004D3900 string=0x00000000001F45E0 "P'"
 *   insn=0x00000000004D3908 string=0x00000000004D3980 "|"
 *   insn=0x00000000004D391C string=0x00000000004D3964 "h"
 *   insn=0x00000000004D3924 string=0x00000000004D3928 "\t"
 *   insn=0x00000000004D3924 string=0x00000000004D3944 "\t"
 *   insn=0x00000000004D3928 string=0x00000000004D392C "*"
 *   insn=0x00000000004D392C string=0x00000000004D3930 "\n"
 *   insn=0x00000000004D3934 string=0x00000000004D3938 "?"
 *   insn=0x00000000004D393C string=0x00000000004D3974 "sB"
 *   insn=0x00000000004D3944 string=0x00000000004D3948 "*"
 *   insn=0x00000000004D3948 string=0x00000000004D394C "\n"
 *   insn=0x00000000004D394C string=0x00000000004D3950 "?"
 *   insn=0x00000000004D3970 string=0x00000000004D3920 "!"
 *   insn=0x00000000004D3978 string=0x00000000004D397C "A"
 *   insn=0x00000000004D3988 string=0x00000000001FD590 "0'"
 *   insn=0x00000000004D3990 string=0x00000000004D3994 "n"
 *   insn=0x00000000004D39A8 string=0x00000000004D39AC "U"
 *   insn=0x00000000004D39B8 string=0x00000000004D39BC "a"
 *   insn=0x00000000004D39C0 string=0x00000000004D39C4 ""
 *   insn=0x00000000004D39C4 string=0x00000000004D39C8 "i"
 *   insn=0x00000000004D39D0 string=0x00000000004D39D4 "A"
 *   insn=0x00000000004D39E4 string=0x00000000004D39E8 "h"
 *   insn=0x00000000004D39E8 string=0x00000000004D39EC "?"
 *   insn=0x00000000004D39F4 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000004D3A10 string=0x00000000004D3A14 "["
 *   insn=0x00000000004D3A14 string=0x00000000001F7380 "0'"
 *   insn=0x00000000004D3A24 string=0x00000000004D3A28 "h"
 *   insn=0x00000000004D3A34 string=0x00000000004D3A38 "i"
 *   insn=0x00000000004D3A3C string=0x00000000004D3A40 "4"
 *   insn=0x00000000004D3A40 string=0x00000000004D3A84 "h"
 *   insn=0x00000000004D3A44 string=0x00000000004D3A48 ""
 *   insn=0x00000000004D3A54 string=0x00000000004D3A58 "\t@"
 *   insn=0x00000000004D3A64 string=0x00000000004D3A68 ""
 *   insn=0x00000000004D3A74 string=0x00000000004D3A78 "@"
 *   insn=0x00000000004D3A88 string=0x00000000004D3A8C "!"
 *   insn=0x00000000004D3A8C string=0x0000000000598194 "ui_popover_border"
 *   insn=0x00000000004D3A98 string=0x00000000004D3A9C "GL"
 *   insn=0x00000000004D3AA8 string=0x00000000001F8300 "0'"
 *   insn=0x00000000004D3AD0 string=0x00000000004D3AD4 "_"
 *   insn=0x00000000004D3AD4 string=0x00000000001FD850 "0'"
 *   insn=0x00000000004D3AE8 string=0x00000000001F7330 "0'"
 *   insn=0x00000000004D3AF8 string=0x00000000004D3AFC "h"
 *   insn=0x00000000004D3B08 string=0x00000000004D3B0C "i"
 *   insn=0x00000000004D3B10 string=0x00000000004D3B14 "4"
 *   insn=0x00000000004D3B14 string=0x00000000004D3B58 "t"
 *   insn=0x00000000004D3B18 string=0x00000000004D3B1C ""
 *   insn=0x00000000004D3B28 string=0x00000000004D3B2C "\t@"
 *   insn=0x00000000004D3B38 string=0x00000000004D3B3C ""
 *   insn=0x00000000004D3B48 string=0x00000000004D3B4C "@"
 *   insn=0x00000000004D3B58 string=0x00000000004D3B5C "!"
 *   insn=0x00000000004D3B5C string=0x00000000005981A6 "ui_popover_arrow"
 *   insn=0x00000000004D3B6C string=0x00000000004D3B70 "("
 *   insn=0x00000000004D3B88 string=0x00000000001FD390 "0'"
 *   insn=0x00000000004D3B94 string=0x00000000004D3B98 "a"
 *   insn=0x00000000004D3BC0 string=0x00000000004D3BC4 ")=G"
 *   insn=0x00000000004D3BC4 string=0x00000000004D3BC8 "!"
 *   insn=0x00000000004D3BCC string=0x00000000004D3BD0 "\t"
 *   insn=0x00000000004D3BCC string=0x00000000004D3C08 "\t"
 *   insn=0x00000000004D3BD0 string=0x00000000004D3BD4 "*"
 *   insn=0x00000000004D3BD4 string=0x00000000004D3BD8 "\n"
 *   insn=0x00000000004D3BDC string=0x00000000004D3BE0 ""
 *   insn=0x00000000004D3BE0 string=0x00000000004D3C14 "?"
 *   insn=0x00000000004D3BE4 string=0x00000000004D3BE8 ")=G"
 *   insn=0x00000000004D3BE8 string=0x00000000004D3BEC "!"
 *   insn=0x00000000004D3BF0 string=0x00000000004D3BF4 "\t"
 *   insn=0x00000000004D3BF0 string=0x00000000004D3C28 "\t"
 *   insn=0x00000000004D3BF4 string=0x00000000004D3BF8 "*"
 *   insn=0x00000000004D3BF8 string=0x00000000004D3BFC "\n"
 *   insn=0x00000000004D3C04 string=0x00000000004D3C34 "?"
 *   insn=0x00000000004D3C08 string=0x00000000004D3C0C "*"
 *   insn=0x00000000004D3C0C string=0x00000000004D3C10 "\n"
 *   insn=0x00000000004D3C14 string=0x00000000004D3C18 "l"
 *   insn=0x00000000004D3C28 string=0x00000000004D3C2C "*"
 *   insn=0x00000000004D3C2C string=0x00000000004D3C30 "\n"
 *   insn=0x00000000004D3C34 string=0x00000000004D3C38 ","
 *   insn=0x00000000004D3C50 string=0x00000000004D3C54 "(a"
 *   insn=0x00000000004D3C5C string=0x00000000004D3D30 "u"
 *   insn=0x00000000004D3C60 string=0x00000000004D3C64 "J=G"
 *   insn=0x00000000004D3C64 string=0x00000000004D3C68 ")!"
 *   insn=0x00000000004D3C6C string=0x00000000004D3C70 "*"
 *   insn=0x00000000004D3C6C string=0x00000000004D3CE8 "*"
 *   insn=0x00000000004D3C70 string=0x00000000004D3C74 "K"
 *   insn=0x00000000004D3C74 string=0x00000000004D3C78 "+"
 *   insn=0x00000000004D3C80 string=0x00000000004D3CC8 "_"
 *   insn=0x00000000004D3C90 string=0x00000000004D3C94 "J"
 *   insn=0x00000000004D3C98 string=0x00000000004D3C9C "(a"
 *   insn=0x00000000004D3CA0 string=0x00000000004D3CA4 "`"
 *   insn=0x00000000004D3CA8 string=0x00000000004D3CAC "J=G"
 *   insn=0x00000000004D3CAC string=0x00000000004D3CB0 ")!"
 *   insn=0x00000000004D3CB4 string=0x00000000004D3CB8 "*"
 *   insn=0x00000000004D3CB8 string=0x00000000004D3CBC "K"
 *   insn=0x00000000004D3CBC string=0x00000000004D3CC0 "+"
 *   insn=0x00000000004D3CC8 string=0x00000000004D3CCC ","
 *   insn=0x00000000004D3CD8 string=0x00000000004D3CDC "u"
 *   insn=0x00000000004D3CE0 string=0x00000000004D3CE4 "%"
 *   insn=0x00000000004D3CE4 string=0x00000000004D3D78 "u"
 *   insn=0x00000000004D3CE8 string=0x00000000004D3CEC "K"
 *   insn=0x00000000004D3CEC string=0x00000000004D3CF0 "+"
 *   insn=0x00000000004D3CF0 string=0x00000000004D3CF4 "_"
 *   insn=0x00000000004D3CF8 string=0x00000000004D3CFC ""
 *   insn=0x00000000004D3D00 string=0x00000000004D3D04 "u"
 *   insn=0x00000000004D3D08 string=0x00000000004D3D0C ""
 *   insn=0x00000000004D3D18 string=0x00000000004D3D1C "e"
 *   insn=0x00000000004D3D1C string=0x00000000004D3D20 "u"
 *   insn=0x00000000004D3D1C string=0x00000000001F72B0 "0'"
 *   insn=0x00000000004D3D30 string=0x00000000004D3D34 "5"
 *   insn=0x00000000004D3D38 string=0x00000000004D3D3C ""
 *   insn=0x00000000004D3D48 string=0x00000000004D3D4C "\t@"
 *   insn=0x00000000004D3D58 string=0x00000000004D3D5C ""
 *   insn=0x00000000004D3D68 string=0x00000000004D3D6C "@"
 *   insn=0x00000000004D3D78 string=0x00000000004D3D7C "5"
 *   insn=0x00000000004D3D7C string=0x00000000004D3DC0 "u"
 *   insn=0x00000000004D3D80 string=0x00000000004D3D84 ""
 *   insn=0x00000000004D3D90 string=0x00000000004D3D94 "\t@"
 *   insn=0x00000000004D3DA0 string=0x00000000004D3DA4 ""
 *   insn=0x00000000004D3DB0 string=0x00000000004D3DB4 "@"
 *   insn=0x00000000004D3DC0 string=0x00000000004D3DC4 "5"
 *   insn=0x00000000004D3DC8 string=0x00000000004D3DCC ""
 *   insn=0x00000000004D3DD8 string=0x00000000004D3DDC "\t@"
 *   insn=0x00000000004D3DE8 string=0x00000000004D3DEC ""
 *   insn=0x00000000004D3DF8 string=0x00000000004D3DFC "@"
 *   insn=0x00000000004D3E08 string=0x00000000004D3E0C "\t"
 *   insn=0x00000000004D3E14 string=0x00000000004D3E18 "M"
 *   insn=0x00000000004D3E30 string=0x00000000004D3E34 "W"
 *   insn=0x00000000004D3E48 string=0x00000000004D3E4C "h"
 *   insn=0x00000000004D3E50 string=0x00000000004D3E54 "h"
 *   insn=0x00000000004D3E54 string=0x00000000004D3E58 "h"E9"
 *   insn=0x00000000004D3E5C string=0x00000000004D3E60 "h"
 *   insn=0x00000000004D3E6C string=0x00000000004D3E70 ""
 *   insn=0x00000000004D3E7C string=0x00000000004D3E80 "h"
 *   insn=0x00000000004D3E7C string=0x00000000001F7210 "0'"
 *   insn=0x00000000004D3E80 string=0x00000000004D3E84 "b&"
 *   insn=0x00000000004D3EA4 string=0x00000000004D3EA8 "j"
 *   insn=0x00000000004D3EA8 string=0x00000000004D3EAC "h"
 *   insn=0x00000000004D3EA8 string=0x00000000001F9850 "0'"
 *   insn=0x00000000004D3EB8 string=0x00000000004D3EBC ""
 *   insn=0x00000000004D3EC8 string=0x00000000004D3ECC "`"
 *   insn=0x00000000004D3ED0 string=0x00000000004D3ED4 "7"
 *   insn=0x00000000004D3EE4 string=0x00000000004D3EE8 "h"
 *   insn=0x00000000004D3EE8 string=0x00000000004D3EEC " %"
 *   insn=0x00000000004D3EEC string=0x00000000004D3EF0 "A"
 *   insn=0x00000000004D3EF0 string=0x00000000004D3EF4 "b"
 *   insn=0x00000000004D3F08 string=0x00000000004D3F0C "`"A"
 *   insn=0x00000000004D3F10 string=0x00000000004D3F14 "k"
 *   insn=0x00000000004D3F14 string=0x00000000001FBCC0 "0'"
 *   insn=0x00000000004D3F30 string=0x00000000004D3F34 "`"
 *   insn=0x00000000004D3F3C string=0x00000000001F8B80 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_DWORD *__fastcall std::__uninitialized_copy<false>::__uninit_copy<Caver::RenderingProgramShader::UniformVariable *,Caver::RenderingProgramShader::UniformVariable *>(
        _DWORD *a1,
        _DWORD *a2,
        _DWORD *a3)
{
  _DWORD *v4; // x22
  _DWORD *v5; // x20

  v4 = a1;
  _ReadStatusReg(TPIDR_EL0);
  if ( a1 == a2 )
    return a3;
  v5 = a3;
  do
  {
    *v5 = *v4;
    sub_56A528(v5 + 2, v4 + 2);
    v4 += 4;
    v5 += 4;
  }
  while ( v4 != a2 );
  return v5;
}

