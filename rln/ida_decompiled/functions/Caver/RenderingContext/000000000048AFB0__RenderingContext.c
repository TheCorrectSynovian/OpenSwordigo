/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000048AFB0
 * Mangled: _ZN5Caver16RenderingContextC2ENS_12RenderingAPIE
 * Demangled: Caver::RenderingContext::RenderingContext(Caver::RenderingAPI)
 *
 * Callers: 1
 *   0x00000000001F8E40  Caver::RenderingContext::RenderingContext(Caver::RenderingAPI)
 *
 * Callees: 6
 *   0x00000000001FA5C0  .glBlendFunc
 *   0x00000000001FB390  Caver::BindBackgroundGLContext(void)
 *   0x00000000001FBF60  std::_Rb_tree<uint,std::pair<uint const,boost::shared_ptr<Caver::RenderingProgram>>,std::_Select1st<std::pair<uint const,boost::shared_ptr<Caver::RenderingProgram>>>,std::less<uint>,std::allocator<std::pair<uint const,boost::shared_ptr<Caver::RenderingProgram>>>>::_M_erase(std::_Rb_tree_node<std::pair<uint const,boost::shared_ptr<Caver::RenderingProgram>>> *)
 *   0x00000000001FCC30  Caver::BasicRenderingPrograms::AddToContext(Caver::RenderingContext *)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 31
 *   insn=0x000000000048AFD0 string=0x000000000048AFD4 "ij"
 *   insn=0x000000000048AFD4 string=0x000000000048AFD8 "i"
 *   insn=0x000000000048AFD8 string=0x000000000048AFDC "\t"
 *   insn=0x000000000048AFDC string=0x000000000048AFE0 "ir"
 *   insn=0x000000000048AFE4 string=0x000000000048AFE8 "`"
 *   insn=0x000000000048AFE8 string=0x000000000048AFEC "`"
 *   insn=0x000000000048AFF0 string=0x000000000048AFF4 "i~"
 *   insn=0x000000000048AFF8 string=0x000000000048AFFC "`."
 *   insn=0x000000000048B020 string=0x000000000048B024 "h""
 *   insn=0x000000000048B024 string=0x000000000048B028 "a"
 *   insn=0x000000000048B02C string=0x00000000001FCC30 "0'"
 *   insn=0x000000000048B030 string=0x000000000048B034 "a`"
 *   insn=0x000000000048B034 string=0x000000000048B038 "b"
 *   insn=0x000000000048B038 string=0x00000000001FA5C0 "0'"
 *   insn=0x000000000048B050 string=0x000000000048B054 "("
 *   insn=0x000000000048B054 string=0x000000000048B058 "\t\t@"
 *   insn=0x000000000048B054 string=0x000000000048B078 "u"@"
 *   insn=0x000000000048B058 string=0x000000000048B05C ")"
 *   insn=0x000000000048B05C string=0x000000000048B060 "\t\t"
 *   insn=0x000000000048B064 string=0x000000000048B068 "\t"
 *   insn=0x000000000048B068 string=0x000000000048B06C ")"
 *   insn=0x000000000048B070 string=0x000000000048B074 " "
 *   insn=0x000000000048B078 string=0x000000000048B07C "5"
 *   insn=0x000000000048B07C string=0x000000000048B0C0 "a"
 *   insn=0x000000000048B080 string=0x000000000048B084 ""
 *   insn=0x000000000048B090 string=0x000000000048B094 "\t@"
 *   insn=0x000000000048B0A0 string=0x000000000048B0A4 ""
 *   insn=0x000000000048B0B0 string=0x000000000048B0B4 "@"
 *   insn=0x000000000048B0C0 string=0x000000000048B0C4 "`""
 *   insn=0x000000000048B0C8 string=0x00000000001FBF60 "0'"
 *   insn=0x000000000048B0D8 string=0x00000000001FB390 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::RenderingContext::RenderingContext(__int64 a1, Caver::RenderingContext *a2)
{
  *(_OWORD *)(a1 + 16) = 0u;
  *(_DWORD *)(a1 + 104) = 1;
  *(_BYTE *)(a1 + 117) = 1;
  *(_DWORD *)(a1 + 119) = -1;
  *(_OWORD *)(a1 + 32) = 0u;
  *(_OWORD *)(a1 + 48) = 0u;
  *(_OWORD *)(a1 + 72) = 0u;
  __asm { FMOV            V0.2S, #1.0 }
  *(_DWORD *)(a1 + 124) = 1065353216;
  *(_QWORD *)(a1 + 64) = 0;
  *(_QWORD *)(a1 + 88) = _D0;
  *(_BYTE *)(a1 + 100) = 0;
  *(_DWORD *)(a1 + 96) = 0;
  *(_BYTE *)(a1 + 116) = 0;
  *(_QWORD *)(a1 + 108) = 0;
  *(_BYTE *)(a1 + 118) = 0;
  *(_BYTE *)(a1 + 128) = 0;
  *(_DWORD *)(a1 + 260) = 0;
  *(_DWORD *)(a1 + 304) = 0;
  *(_QWORD *)(a1 + 312) = 0;
  *(_QWORD *)(a1 + 32) = a1 + 16;
  *(_QWORD *)(a1 + 40) = a1 + 16;
  *(_DWORD *)a1 = (_DWORD)a2;
  Caver::BasicRenderingPrograms::AddToContext((Caver::BasicRenderingPrograms *)a1, a2);
  return glBlendFunc();
}

