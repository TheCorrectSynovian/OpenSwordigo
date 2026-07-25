/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000021E7B8
 * Mangled: _ZN5Caver23BlendAnimationComponent14ConnectOutletsEv
 * Demangled: Caver::BlendAnimationComponent::ConnectOutlets(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F3480  Caver::BlendAnimationComponent::setAnimation2(Caver::AnimationComponent *)
 *   0x00000000001F7F70  Caver::BlendAnimationComponent::setAnimation1(Caver::AnimationComponent *)
 *   0x00000000001F8520  Caver::SceneObject::ComponentWithIdentifier(int)
 *
 * Referenced strings: 15
 *   insn=0x000000000021E7C4 string=0x000000000021E7C8 "h"
 *   insn=0x000000000021E7CC string=0x000000000021E7DC "`"
 *   insn=0x000000000021E7E0 string=0x000000000021E7E4 "hF@"
 *   insn=0x000000000021E7E8 string=0x000000000021E7EC "i"
 *   insn=0x000000000021E7F0 string=0x000000000021E7F4 "hN@"
 *   insn=0x000000000021E7F0 string=0x000000000021E800 "a"
 *   insn=0x000000000021E7F8 string=0x000000000021E7FC ""
 *   insn=0x000000000021E7FC string=0x000000000021E81C "`"
 *   insn=0x000000000021E800 string=0x000000000021E804 "Gg"
 *   insn=0x000000000021E804 string=0x00000000001F8520 "0'"
 *   insn=0x000000000021E810 string=0x000000000021E814 "hN@"
 *   insn=0x000000000021E810 string=0x00000000001F7F70 "0'"
 *   insn=0x000000000021E81C string=0x000000000021E820 "a"
 *   insn=0x000000000021E820 string=0x000000000021E824 "?g"
 *   insn=0x000000000021E838 string=0x00000000001F3480 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::BlendAnimationComponent::ConnectOutlets(Caver::BlendAnimationComponent *this)
{
  Caver::SceneObject *v2; // x0
  __int64 v3; // x8
  Caver::AnimationComponent *v4; // x0

  if ( !*((_BYTE *)this + 112) )
  {
    v2 = (Caver::SceneObject *)*((_QWORD *)this + 5);
    if ( v2 )
    {
      v3 = *((_QWORD *)this + 17);
      *((_BYTE *)this + 112) = 1;
      if ( v3 )
      {
        if ( !*((_QWORD *)this + 19) )
          goto LABEL_8;
      }
      else
      {
        Caver::SceneObject::ComponentWithIdentifier(v2);
        Caver::BlendAnimationComponent::setAnimation1(this, v4);
        if ( !*((_QWORD *)this + 19) )
        {
LABEL_8:
          Caver::SceneObject::ComponentWithIdentifier(*((Caver::SceneObject **)this + 5));
          Caver::BlendAnimationComponent::setAnimation2();
        }
      }
    }
  }
}

