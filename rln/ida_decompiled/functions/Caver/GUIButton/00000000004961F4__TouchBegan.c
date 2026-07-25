/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004961F4
 * Mangled: _ZN5Caver9GUIButton10TouchBeganERKNS_7FWTouchE
 * Demangled: Caver::GUIButton::TouchBegan(Caver::FWTouch const&)
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F5340  Caver::AudioSystem::PlaySoundEffectWithName(std::string const&,float)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FDF30  Caver::AudioSystem::sharedSystem(void)
 *   0x0000000000203510  Caver::GUIControl::SendActionsForControlEvent(Caver::GUIControl::Event,uint)
 *
 * Referenced strings: 24
 *   insn=0x0000000000496200 string=0x0000000000496204 "T"
 *   insn=0x0000000000496214 string=0x0000000000496218 "a"A"
 *   insn=0x0000000000496218 string=0x000000000049621C ""
 *   insn=0x000000000049621C string=0x0000000000496220 "?"
 *   insn=0x0000000000496220 string=0x0000000000496224 "h"
 *   insn=0x0000000000496224 string=0x0000000000496228 " "
 *   insn=0x0000000000496228 string=0x000000000049624C "("
 *   insn=0x0000000000496250 string=0x0000000000496254 "h""
 *   insn=0x0000000000496258 string=0x000000000049625C "h"
 *   insn=0x0000000000496260 string=0x0000000000496264 ""
 *   insn=0x0000000000496288 string=0x000000000049628C "h"
 *   insn=0x000000000049628C string=0x0000000000496290 ""
 *   insn=0x0000000000496294 string=0x0000000000496298 "s"
 *   insn=0x0000000000496298 string=0x000000000049629C "%"
 *   insn=0x000000000049629C string=0x00000000001FDF30 "0'"
 *   insn=0x00000000004962A8 string=0x00000000004962AC "%|"
 *   insn=0x00000000004962AC string=0x00000000001F5340 "P'"
 *   insn=0x00000000004962B4 string=0x00000000004962B8 "@"
 *   insn=0x00000000004962B8 string=0x00000000004962BC ""
 *   insn=0x00000000004962BC string=0x00000000004962C0 ""
 *   insn=0x00000000004962C0 string=0x00000000004962C4 "A"
 *   insn=0x00000000004962C4 string=0x00000000004962C8 ""
 *   insn=0x00000000004962C8 string=0x00000000004962CC ""
 *   insn=0x00000000004962D8 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::AudioSystem *__fastcall Caver::GUIButton::TouchBegan(Caver::AudioSystem *this, const Caver::FWTouch *a2)
{
  Caver::AudioSystem *v2; // x19
  int v4; // w1
  int v5; // w8
  Caver::AudioSystem *v6; // [xsp+0h] [xbp-20h]

  v2 = this;
  _ReadStatusReg(TPIDR_EL0);
  v4 = *((_DWORD *)this + 72);
  *((_QWORD *)this + 57) = *(_QWORD *)a2;
  if ( (v4 & 3) == 0 )
  {
    *((_DWORD *)this + 72) = v4 | 1;
    if ( (v4 | 1) != v4 )
      (*(void (__fastcall **)(Caver::AudioSystem *))(*(_QWORD *)this + 304LL))(this);
    Caver::GUIControl::SendActionsForControlEvent();
    this = (Caver::AudioSystem *)Caver::GUIControl::SendActionsForControlEvent();
    if ( *(_QWORD *)(*((_QWORD *)v2 + 56) - 24LL) )
    {
      Caver::AudioSystem::sharedSystem(this);
      Caver::AudioSystem::PlaySoundEffectWithName();
      this = v6;
      if ( v6 )
      {
        v5 = *((_DWORD *)v6 + 2) - 1;
        *((_DWORD *)v6 + 2) = v5;
        if ( !v5 )
          return (Caver::AudioSystem *)(*(__int64 (__fastcall **)())(*(_QWORD *)v6 + 8LL))();
      }
    }
  }
  return this;
}

