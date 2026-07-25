/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000049DD80
 * Mangled: _ZN5Caver9GUISwitch10TouchBeganERKNS_7FWTouchE
 * Demangled: Caver::GUISwitch::TouchBegan(Caver::FWTouch const&)
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F5340  Caver::AudioSystem::PlaySoundEffectWithName(std::string const&,float)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FDF30  Caver::AudioSystem::sharedSystem(void)
 *   0x0000000000203510  Caver::GUIControl::SendActionsForControlEvent(Caver::GUIControl::Event,uint)
 *
 * Referenced strings: 25
 *   insn=0x000000000049DD8C string=0x000000000049DD90 "T"
 *   insn=0x000000000049DDA0 string=0x000000000049DDA4 "a"A"
 *   insn=0x000000000049DDA4 string=0x000000000049DDA8 ""
 *   insn=0x000000000049DDA8 string=0x000000000049DDAC "?"
 *   insn=0x000000000049DDAC string=0x000000000049DDB0 "h"
 *   insn=0x000000000049DDB0 string=0x000000000049DDB4 " "
 *   insn=0x000000000049DDB4 string=0x000000000049DDD8 "("
 *   insn=0x000000000049DDC4 string=0x000000000049DE64 "a"
 *   insn=0x000000000049DDDC string=0x000000000049DDE0 "h""
 *   insn=0x000000000049DDE4 string=0x000000000049DDE8 "h"
 *   insn=0x000000000049DDEC string=0x000000000049DDF0 ""
 *   insn=0x000000000049DE14 string=0x000000000049DE18 "h"
 *   insn=0x000000000049DE18 string=0x000000000049DE1C ""
 *   insn=0x000000000049DE20 string=0x000000000049DE24 "sB"
 *   insn=0x000000000049DE24 string=0x000000000049DE28 "B"
 *   insn=0x000000000049DE28 string=0x00000000001FDF30 "0'"
 *   insn=0x000000000049DE34 string=0x000000000049DE38 "B]"
 *   insn=0x000000000049DE38 string=0x00000000001F5340 "P'"
 *   insn=0x000000000049DE40 string=0x000000000049DE44 "@"
 *   insn=0x000000000049DE44 string=0x000000000049DE48 ""
 *   insn=0x000000000049DE48 string=0x000000000049DE4C ""
 *   insn=0x000000000049DE4C string=0x000000000049DE50 "A"
 *   insn=0x000000000049DE50 string=0x000000000049DE54 ""
 *   insn=0x000000000049DE54 string=0x000000000049DE58 ""
 *   insn=0x000000000049DE64 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::AudioSystem *__fastcall Caver::GUISwitch::TouchBegan(Caver::AudioSystem *this, const Caver::FWTouch *a2)
{
  Caver::AudioSystem *v2; // x19
  int v4; // w1
  int v5; // w8
  Caver::AudioSystem *v6; // [xsp+0h] [xbp-20h]

  v2 = this;
  _ReadStatusReg(TPIDR_EL0);
  v4 = *((_DWORD *)this + 72);
  *((_QWORD *)this + 43) = *(_QWORD *)a2;
  if ( (v4 & 3) == 0 )
  {
    *((_DWORD *)this + 72) = v4 | 1;
    if ( (v4 | 1) != v4 )
      (*(void (__fastcall **)(Caver::AudioSystem *))(*(_QWORD *)this + 304LL))(this);
    Caver::GUIControl::SendActionsForControlEvent();
    this = (Caver::AudioSystem *)Caver::GUIControl::SendActionsForControlEvent();
    if ( *(_QWORD *)(*((_QWORD *)v2 + 42) - 24LL) )
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

