/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000021F2EC
 * Mangled: _ZN5Caver23BlendAnimationComponent22ValueForBindedPropertyEi
 * Demangled: Caver::BlendAnimationComponent::ValueForBindedProperty(int)
 *
 * Callers: 1
 *   0x00000000001F5850  Caver::BlendAnimationComponent::ValueForBindedProperty(int)
 *
 * Callees: 9
 *   0x00000000001F3480  Caver::BlendAnimationComponent::setAnimation2(Caver::AnimationComponent *)
 *   0x00000000001F5850  Caver::BlendAnimationComponent::ValueForBindedProperty(int)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7F70  Caver::BlendAnimationComponent::setAnimation1(Caver::AnimationComponent *)
 *   0x00000000001F8520  Caver::SceneObject::ComponentWithIdentifier(int)
 *   0x00000000001FF480  Caver::BindingValue::ValueWithFloat(float)
 *   0x00000000001FF970  Caver::Component::ValueForBindedOutlet(boost::intrusive_ptr<Caver::Component> const&)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 47
 *   insn=0x000000000021F2FC string=0x000000000021F300 "U"
 *   insn=0x000000000021F30C string=0x000000000021F310 "?"
 *   insn=0x000000000021F318 string=0x000000000021F31C ")"
 *   insn=0x000000000021F320 string=0x000000000021F324 ")"
 *   insn=0x000000000021F324 string=0x000000000021F328 "(y"
 *   insn=0x000000000021F328 string=0x000000000021F32C ""
 *   insn=0x000000000021F334 string=0x000000000021F338 ""
 *   insn=0x000000000021F344 string=0x000000000021F348 "\t\t@"
 *   insn=0x000000000021F348 string=0x000000000021F34C ")"
 *   insn=0x000000000021F34C string=0x000000000021F350 "\t\t"
 *   insn=0x000000000021F374 string=0x000000000021F378 "  "
 *   insn=0x000000000021F378 string=0x000000000021F37C "L"
 *   insn=0x000000000021F384 string=0x000000000021F388 ">"
 *   insn=0x000000000021F3A0 string=0x000000000021F3A4 "\t\t@"
 *   insn=0x000000000021F3A4 string=0x000000000021F3A8 ")"
 *   insn=0x000000000021F3A8 string=0x000000000021F3AC "\t\t"
 *   insn=0x000000000021F3B8 string=0x000000000021F3BC "m"
 *   insn=0x000000000021F3C4 string=0x000000000021F3C8 "@"
 *   insn=0x000000000021F3C8 string=0x000000000021F3CC ""
 *   insn=0x000000000021F3CC string=0x000000000021F3D0 ""
 *   insn=0x000000000021F3D4 string=0x000000000021F3D8 ""
 *   insn=0x000000000021F3D8 string=0x000000000021F3DC ""
 *   insn=0x000000000021F430 string=0x000000000021F434 ";d"
 *   insn=0x000000000021F434 string=0x00000000001F8520 "0'"
 *   insn=0x000000000021F440 string=0x00000000001F7F70 "0'"
 *   insn=0x000000000021F450 string=0x000000000021F454 "3d"
 *   insn=0x000000000021F45C string=0x000000000021F460 "P"
 *   insn=0x000000000021F460 string=0x00000000001F3480 "P'"
 *   insn=0x000000000021F468 string=0x000000000021F46C "`"
 *   insn=0x000000000021F480 string=0x000000000021F484 "'d"
 *   insn=0x000000000021F494 string=0x000000000021F498 ""
 *   insn=0x000000000021F4B8 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000021F4C4 string=0x000000000021F4C8 "\t\t@"
 *   insn=0x000000000021F4C8 string=0x000000000021F4CC ")"
 *   insn=0x000000000021F4CC string=0x000000000021F4D0 "\t\t"
 *   insn=0x000000000021F4D0 string=0x000000000021F4D4 "!"
 *   insn=0x000000000021F4D4 string=0x000000000021F4D8 "\t"
 *   insn=0x000000000021F4D8 string=0x000000000021F4DC ")"
 *   insn=0x000000000021F4E0 string=0x000000000021F4E4 " "
 *   insn=0x000000000021F4F0 string=0x000000000021F4F4 "("
 *   insn=0x000000000021F4F4 string=0x000000000021F4F8 "\t\t@"
 *   insn=0x000000000021F4F8 string=0x000000000021F4FC ")"
 *   insn=0x000000000021F4FC string=0x000000000021F500 "\t\t"
 *   insn=0x000000000021F504 string=0x000000000021F508 "\t"
 *   insn=0x000000000021F508 string=0x000000000021F50C ")"
 *   insn=0x000000000021F510 string=0x000000000021F514 " "
 *   insn=0x000000000021F528 string=0x00000000001F5850 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __usercall Caver::BlendAnimationComponent::ValueForBindedProperty(
        Caver::BlendAnimationComponent *this@<X0>,
        int a2@<W1>,
        __int64 a3@<X8>)
{
  _DWORD *v4; // x8
  __int64 v5; // x8
  float v6; // s0
  _DWORD *v7; // x8
  int v8; // w8
  Caver::SceneObject *v9; // x0
  __int64 v10; // x8
  Caver::AnimationComponent *v11; // x0
  Caver::SceneObject *v12; // x0
  __int64 v13; // x8
  Caver::AnimationComponent *v14; // x0
  _DWORD *v15; // [xsp+0h] [xbp-30h]

  _ReadStatusReg(TPIDR_EL0);
  switch ( a2 )
  {
    case 0:
      if ( !*((_BYTE *)this + 112) )
      {
        v9 = (Caver::SceneObject *)*((_QWORD *)this + 5);
        if ( v9 )
        {
          v10 = *((_QWORD *)this + 17);
          *((_BYTE *)this + 112) = 1;
          if ( !v10 )
          {
            Caver::SceneObject::ComponentWithIdentifier(v9);
            Caver::BlendAnimationComponent::setAnimation1(this, v11);
          }
          if ( !*((_QWORD *)this + 19) )
          {
            Caver::SceneObject::ComponentWithIdentifier(*((Caver::SceneObject **)this + 5));
            Caver::BlendAnimationComponent::setAnimation2();
          }
        }
      }
      v4 = (_DWORD *)*((_QWORD *)this + 17);
      v15 = v4;
      if ( v4 )
        ++v4[2];
      goto LABEL_13;
    case 1:
      if ( !*((_BYTE *)this + 112) )
      {
        v12 = (Caver::SceneObject *)*((_QWORD *)this + 5);
        if ( v12 )
        {
          v13 = *((_QWORD *)this + 17);
          *((_BYTE *)this + 112) = 1;
          if ( !v13 )
          {
            Caver::SceneObject::ComponentWithIdentifier(v12);
            Caver::BlendAnimationComponent::setAnimation1(this, v14);
          }
          if ( !*((_QWORD *)this + 19) )
          {
            Caver::SceneObject::ComponentWithIdentifier(*((Caver::SceneObject **)this + 5));
            Caver::BlendAnimationComponent::setAnimation2();
          }
        }
      }
      v7 = (_DWORD *)*((_QWORD *)this + 19);
      v15 = v7;
      if ( v7 )
        ++v7[2];
LABEL_13:
      Caver::Component::ValueForBindedOutlet();
      if ( v15 )
      {
        v8 = v15[2] - 1;
        v15[2] = v8;
        if ( !v8 )
          (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v15 + 8LL))(v15);
      }
      return;
    case 2:
      v5 = *((_QWORD *)this + 15);
      goto LABEL_8;
    case 3:
      v5 = *((_QWORD *)this + 15);
      v6 = *(float *)(v5 + 40);
      if ( v6 <= 0.0 )
LABEL_8:
        v6 = *(float *)(v5 + 36);
      Caver::BindingValue::ValueWithFloat(this, v6);
      break;
    default:
      *(_DWORD *)a3 = 0;
      *(_QWORD *)(a3 + 24) = 0;
      *(_QWORD *)(a3 + 32) = 0;
      *(_QWORD *)(a3 + 8) = 0;
      *(_QWORD *)(a3 + 16) = 0;
      break;
  }
}

