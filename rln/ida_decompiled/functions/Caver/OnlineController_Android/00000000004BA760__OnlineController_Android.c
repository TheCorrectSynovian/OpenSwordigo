/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004BA760
 * Mangled: _ZN5Caver24OnlineController_AndroidC2Ev
 * Demangled: Caver::OnlineController_Android::OnlineController_Android(void)
 *
 * Callers: 2
 *   0x00000000001F7A60  Caver::OnlineController_Android::OnlineController_Android(void)
 *   0x00000000004BA6CC  Caver::GUITextField::~GUITextField()
 *
 * Callees: 0
 *
 * Referenced strings: 8
 *   insn=0x00000000004BA760 string=0x00000000004BA764 ""
 *   insn=0x00000000004BA764 string=0x00000000004BA768 "\n"
 *   insn=0x00000000004BA768 string=0x00000000004BA76C "\t@"
 *   insn=0x00000000004BA76C string=0x00000000004BA770 "j"
 *   insn=0x00000000004BA770 string=0x00000000004BA774 "A"
 *   insn=0x00000000004BA778 string=0x00000000004BA77C "\t$"
 *   insn=0x00000000004BA77C string=0x00000000004BA780 ""
 *   insn=0x00000000004BA780 string=0x00000000004BA784 "\n"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::OnlineController_Android::OnlineController_Android(__int64 this)
{
  *(_BYTE *)(this + 32) = 0;
  *(_QWORD *)(this + 16) = this + 16;
  *(_QWORD *)(this + 24) = this + 16;
  *(_QWORD *)this = off_6D78F0;
  *(_QWORD *)(this + 40) = 0xC0C3880000000000LL;
  return this;
}

