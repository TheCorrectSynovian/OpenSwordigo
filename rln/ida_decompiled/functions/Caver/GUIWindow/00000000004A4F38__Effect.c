/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004A4F38
 * Mangled: _ZN5Caver9GUIWindow6EffectEv
 * Demangled: Caver::GUIWindow::Effect(void)
 *
 * Callers: 1
 *   0x00000000001F3FA0  Caver::GUIWindow::Effect(void)
 *
 * Callees: 9
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FC500  Caver::GUIEffect::SetFrame(Caver::Rectangle const&)
 *   0x00000000001FDB50  Caver::GUIEffect::GUIEffect(void)
 *   0x00000000001FFB30  boost::detail::shared_count::shared_count<Caver::GUIEffect>(Caver::GUIEffect *)
 *   0x0000000000202950  boost::detail::sp_enable_shared_from_this(...)
 *   0x00000000004A5040  Caver::GUIWindow::UndoManager(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 21
 *   insn=0x00000000004A4F48 string=0x00000000004A4F4C "U"
 *   insn=0x00000000004A4F58 string=0x00000000004A4F5C "`"
 *   insn=0x00000000004A4F5C string=0x00000000004A4F60 " "
 *   insn=0x00000000004A4F68 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000004A4F70 string=0x00000000001FDB50 "0'"
 *   insn=0x00000000004A4F90 string=0x00000000004A4F94 "ov"
 *   insn=0x00000000004A4F94 string=0x00000000004A4F98 "h"
 *   insn=0x00000000004A4FA4 string=0x00000000004A4FA8 "i"
 *   insn=0x00000000004A4FAC string=0x00000000004A4FB0 "4"
 *   insn=0x00000000004A4FB0 string=0x00000000004A4FF4 "`"
 *   insn=0x00000000004A4FB4 string=0x00000000004A4FB8 ""
 *   insn=0x00000000004A4FC8 string=0x00000000004A4FCC "\t@"
 *   insn=0x00000000004A4FD4 string=0x00000000004A4FD8 ""
 *   insn=0x00000000004A4FE8 string=0x00000000004A4FEC "@"
 *   insn=0x00000000004A4FF4 string=0x00000000004A4FF8 "a"
 *   insn=0x00000000004A4FF8 string=0x00000000004A4FFC "A]"
 *   insn=0x00000000004A4FFC string=0x00000000004A5000 "`"
 *   insn=0x00000000004A4FFC string=0x00000000001FC500 "0'"
 *   insn=0x00000000004A5028 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000004A5034 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000004A5038 string=0x00000000004A503C ""r"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GUIWindow::Effect(Caver::GUIWindow *this)
{
  __int64 result; // x0
  Caver::GUIEffect *v3; // x20
  _QWORD *v4; // x20
  __int64 v5; // x8
  __int64 v6; // x8
  Caver::GUIEffect *v7; // [xsp+8h] [xbp-38h]
  __int64 v8; // [xsp+10h] [xbp-30h]

  _ReadStatusReg(TPIDR_EL0);
  result = *((_QWORD *)this + 61);
  if ( !result )
  {
    v3 = (Caver::GUIEffect *)operator new(0x70u);
    Caver::GUIEffect::GUIEffect(v3);
    v7 = v3;
    boost::detail::shared_count::shared_count<Caver::GUIEffect>();
    boost::detail::sp_enable_shared_from_this();
    v4 = (_QWORD *)*((_QWORD *)this + 62);
    *((_QWORD *)this + 61) = v7;
    *((_QWORD *)this + 62) = v8;
    if ( v4 )
    {
      v5 = v4[1] - 1LL;
      v4[1] = v5;
      if ( !v5 )
      {
        (*(void (__fastcall **)(_QWORD *))(*v4 + 16LL))(v4);
        v6 = v4[2] - 1LL;
        v4[2] = v6;
        if ( !v6 )
          (*(void (__fastcall **)(_QWORD *))(*v4 + 24LL))(v4);
      }
    }
    Caver::GUIEffect::SetFrame(*((Caver::GUIEffect **)this + 61), (Caver::GUIWindow *)((char *)this + 132));
    return *((_QWORD *)this + 61);
  }
  return result;
}

