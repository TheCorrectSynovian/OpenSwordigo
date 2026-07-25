/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000474A28
 * Mangled: _ZN5Caver11SceneObject8ActivateEv
 * Demangled: Caver::SceneObject::Activate(void)
 *
 * Callers: 1
 *   0x00000000001FFD90  Caver::SceneObject::Activate(void)
 *
 * Callees: 5
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FEB20  Caver::Scene::RegisterObjectWaitingForActivation(boost::intrusive_ptr<Caver::SceneObject> const&)
 *   0x00000000001FFD90  Caver::SceneObject::Activate(void)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 31
 *   insn=0x0000000000474A34 string=0x0000000000474A38 "S"
 *   insn=0x0000000000474A38 string=0x0000000000474A3C "i"
 *   insn=0x0000000000474A48 string=0x0000000000474A4C "`"
 *   insn=0x0000000000474A4C string=0x0000000000474A50 "\t"
 *   insn=0x0000000000474A4C string=0x0000000000474A58 "h"
 *   insn=0x0000000000474A50 string=0x0000000000474A54 ")"
 *   insn=0x0000000000474A78 string=0x0000000000474A7C "\t\t@"
 *   insn=0x0000000000474A7C string=0x0000000000474A80 ")"
 *   insn=0x0000000000474A80 string=0x0000000000474A84 "\t\t"
 *   insn=0x0000000000474A88 string=0x0000000000474A8C "%("
 *   insn=0x0000000000474A90 string=0x0000000000474A94 " "
 *   insn=0x0000000000474A94 string=0x0000000000474A98 "@"
 *   insn=0x0000000000474A98 string=0x0000000000474A9C ""
 *   insn=0x0000000000474A9C string=0x0000000000474AA0 ""
 *   insn=0x0000000000474AA4 string=0x0000000000474AA8 ""
 *   insn=0x0000000000474AA8 string=0x0000000000474AAC ""
 *   insn=0x0000000000474AB8 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000474AC0 string=0x0000000000474AC4 "("
 *   insn=0x0000000000474AC4 string=0x0000000000474AC8 "\t\t@"
 *   insn=0x0000000000474AC8 string=0x0000000000474ACC ")"
 *   insn=0x0000000000474ACC string=0x0000000000474AD0 "\t\t"
 *   insn=0x0000000000474AD4 string=0x0000000000474AD8 "\t"
 *   insn=0x0000000000474AD8 string=0x0000000000474ADC ")"
 *   insn=0x0000000000474AE0 string=0x0000000000474AE4 " "
 *   insn=0x0000000000474AE8 string=0x0000000000474AEC "v3"
 *   insn=0x0000000000474AF0 string=0x0000000000474AF4 "\t"
 *   insn=0x0000000000474AF4 string=0x0000000000474AF8 "("
 *   insn=0x0000000000474B00 string=0x0000000000474B04 ""
 *   insn=0x0000000000474B04 string=0x0000000000474B08 "a"
 *   insn=0x0000000000474B08 string=0x0000000000474B0C ""
 *   insn=0x0000000000474B0C string=0x0000000000474B10 "H"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::SceneObject *__fastcall Caver::SceneObject::Activate(Caver::SceneObject *this)
{
  Caver::SceneObject *result; // x0
  int v3; // w8
  Caver::SceneObject *v4; // [xsp+0h] [xbp-20h]

  _ReadStatusReg(TPIDR_EL0);
  result = (Caver::SceneObject *)*((_QWORD *)this + 4);
  if ( result )
  {
    if ( !*((_BYTE *)this + 240) )
    {
      v4 = this;
      ++*((_DWORD *)this + 2);
      Caver::Scene::RegisterObjectWaitingForActivation();
      result = v4;
      if ( v4 )
      {
        v3 = *((_DWORD *)v4 + 2) - 1;
        *((_DWORD *)v4 + 2) = v3;
        if ( !v3 )
          return (Caver::SceneObject *)(*(__int64 (__fastcall **)(Caver::SceneObject *))(*(_QWORD *)v4 + 8LL))(v4);
      }
    }
  }
  return result;
}

