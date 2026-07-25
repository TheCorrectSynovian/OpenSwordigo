/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000025DC80
 * Mangled: _ZN5Caver23CharControllerComponent13HandleMessageEiPv
 * Demangled: Caver::CharControllerComponent::HandleMessage(int,void *)
 *
 * Callers: 0
 *
 * Callees: 7
 *   0x00000000001F4FA0  Caver::SoundEffectComponent::Play(void)
 *   0x00000000001F7160  Caver::CharControllerComponent::UpdatePickupObjectPosition(void)
 *   0x00000000001F7AE0  Caver::ComponentOutletBase::Connect(Caver::Component const*)
 *   0x00000000001F7B90  Caver::SwingableWeaponControllerComponent::UpdateWeaponTransform(void)
 *   0x00000000001F8ED0  Caver::CharControllerComponent::Hurt(void)
 *   0x00000000001F9D70  Caver::CharAnimControllerComponent::StandOnGround(void)
 *   0x0000000000202B40  Caver::CharControllerComponent::Die(void)
 *
 * Referenced strings: 143
 *   insn=0x000000000025DC8C string=0x000000000025DC90 "("
 *   insn=0x000000000025DC98 string=0x000000000025DC9C ""
 *   insn=0x000000000025DC9C string=0x000000000025DCA0 "I"
 *   insn=0x000000000025DCA0 string=0x000000000025DCA8 "(y"
 *   insn=0x000000000025DCA8 string=0x000000000025DCAC ""
 *   insn=0x000000000025DCB0 string=0x000000000025DCB4 "H"
 *   insn=0x000000000025DCB0 string=0x000000000025DD04 "H"
 *   insn=0x000000000025DCB0 string=0x000000000025DD30 "h"
 *   insn=0x000000000025DCB0 string=0x000000000025DD48 "I"
 *   insn=0x000000000025DCB4 string=0x000000000025DCB8 ""
 *   insn=0x000000000025DCB8 string=0x000000000025DCBC ""
 *   insn=0x000000000025DCBC string=0x000000000025DCC0 "T"
 *   insn=0x000000000025DCCC string=0x000000000025DCE0 "i"
 *   insn=0x000000000025DCD4 string=0x000000000025DF30 "@,@"
 *   insn=0x000000000025DCE8 string=0x000000000025DCEC "!"
 *   insn=0x000000000025DCEC string=0x000000000025DFB0 "iB@"
 *   insn=0x000000000025DCF4 string=0x000000000025DCF8 "i"
 *   insn=0x000000000025DCF8 string=0x000000000025DCFC ""
 *   insn=0x000000000025DCFC string=0x000000000025DFFC "\t\t@"
 *   insn=0x000000000025DD00 string=0x000000000025E008 "`NA"
 *   insn=0x000000000025DD04 string=0x000000000025DD08 ""
 *   insn=0x000000000025DD0C string=0x000000000025DD10 "@"
 *   insn=0x000000000025DD10 string=0x000000000025DD18 "h"
 *   insn=0x000000000025DD18 string=0x000000000025DD1C "H"
 *   insn=0x000000000025DD24 string=0x000000000025DD28 "jl"
 *   insn=0x000000000025DD28 string=0x000000000025DD2C "|"
 *   insn=0x000000000025DD28 string=0x00000000001F8ED0 "0'"
 *   insn=0x000000000025DD30 string=0x000000000025DD34 "H"
 *   insn=0x000000000025DD40 string=0x000000000025DD44 "v"
 *   insn=0x000000000025DD48 string=0x000000000025DD4C "H"
 *   insn=0x000000000025DD4C string=0x000000000025DD50 "H,@"
 *   insn=0x000000000025DD54 string=0x000000000025DD58 "\t\t@"
 *   insn=0x000000000025DD54 string=0x000000000025DD64 "`FA"
 *   insn=0x000000000025DD58 string=0x000000000025DD5C ")"
 *   insn=0x000000000025DD5C string=0x000000000025DD60 "\t\t"
 *   insn=0x000000000025DD64 string=0x000000000025DD68 "hF"
 *   insn=0x000000000025DD6C string=0x000000000025DD70 "@"
 *   insn=0x000000000025DD6C string=0x000000000025DD8C "H"
 *   insn=0x000000000025DD70 string=0x000000000025DD74 ""
 *   insn=0x000000000025DD74 string=0x000000000025DD78 ""
 *   insn=0x000000000025DD7C string=0x000000000025DD80 ""
 *   insn=0x000000000025DD80 string=0x000000000025DD84 ""
 *   insn=0x000000000025DD8C string=0x0000000000587900 "ffffff"
 *   insn=0x000000000025DD94 string=0x000000000025DD98 "  `"
 *   insn=0x000000000025DD9C string=0x000000000025DDA0 "hRB"
 *   insn=0x000000000025DD9C string=0x000000000025DDB0 "("
 *   insn=0x000000000025DDA4 string=0x000000000025DDA8 "A"
 *   insn=0x000000000025DDB0 string=0x0000000000584430 "333?"
 *   insn=0x000000000025DDBC string=0x000000000025DDC0 "H"
 *   insn=0x000000000025DDBC string=0x000000000025DDF8 "("
 *   insn=0x000000000025DDC4 string=0x000000000025DDC8 " ! "
 *   insn=0x000000000025DDC8 string=0x000000000025DDCC "e"
 *   insn=0x000000000025DDCC string=0x000000000025DDD0 "hrI9("
 *   insn=0x000000000025DDD0 string=0x000000000025DDD4 "("
 *   insn=0x000000000025DDD4 string=0x000000000025DDD8 "`"
 *   insn=0x000000000025DDDC string=0x000000000025DDE0 "`"
 *   insn=0x000000000025DDDC string=0x000000000025DDF4 "k\"
 *   insn=0x000000000025DDE4 string=0x000000000025DDE8 ">g"
 *   insn=0x000000000025DDE8 string=0x000000000025DDEC "`"
 *   insn=0x000000000025DDE8 string=0x00000000001F7AE0 "0'"
 *   insn=0x000000000025DDEC string=0x000000000025DDF0 "@"
 *   insn=0x000000000025DDF4 string=0x00000000001F4FA0 "P'"
 *   insn=0x000000000025DE00 string=0x000000000025DE04 "   "
 *   insn=0x000000000025DE08 string=0x000000000025DE0C "h"
 *   insn=0x000000000025DE08 string=0x000000000025DE18 "hB@"
 *   insn=0x000000000025DE0C string=0x000000000025DE10 "H"
 *   insn=0x000000000025DE1C string=0x000000000025DE20 "`"
 *   insn=0x000000000025DE1C string=0x000000000025DE30 ")"
 *   insn=0x000000000025DE24 string=0x000000000025DE28 ".g"
 *   insn=0x000000000025DE28 string=0x000000000025DE2C "hB@"
 *   insn=0x000000000025DE34 string=0x000000000025DE38 "!5D"
 *   insn=0x000000000025DE3C string=0x000000000025DE40 "e"
 *   insn=0x000000000025DE40 string=0x000000000025DECC "h"
 *   insn=0x000000000025DE44 string=0x000000000025DE48 "  "
 *   insn=0x000000000025DE48 string=0x000000000025DE4C ""
 *   insn=0x000000000025DE4C string=0x000000000025DE50 "AB9"
 *   insn=0x000000000025DE54 string=0x000000000025DE58 "hRB"
 *   insn=0x000000000025DE5C string=0x000000000025DE60 "h"
 *   insn=0x000000000025DE60 string=0x000000000025DE64 "`"
 *   insn=0x000000000025DE68 string=0x000000000025DE6C "`N@"
 *   insn=0x000000000025DE70 string=0x000000000025DE74 "`""
 *   insn=0x000000000025DE70 string=0x000000000025DE88 "@"
 *   insn=0x000000000025DE7C string=0x000000000025DE80 "`N@"
 *   insn=0x000000000025DE84 string=0x000000000025DE94 "h"
 *   insn=0x000000000025DE88 string=0x000000000025DE8C ""
 *   insn=0x000000000025DE8C string=0x000000000025DE90 ""
 *   insn=0x000000000025DE94 string=0x000000000025DE98 "`"
 *   insn=0x000000000025DE98 string=0x000000000025DE9C "H"
 *   insn=0x000000000025DE9C string=0x000000000025DEA0 "\t\t@"
 *   insn=0x000000000025DE9C string=0x000000000025DEC4 "@"
 *   insn=0x000000000025DEA0 string=0x000000000025DEA4 ")"
 *   insn=0x000000000025DEA4 string=0x000000000025DEA8 "\t\t"
 *   insn=0x000000000025DEAC string=0x000000000025DEB0 "\t"
 *   insn=0x000000000025DEB4 string=0x000000000025DEB8 ")"
 *   insn=0x000000000025DEB8 string=0x000000000025DEBC " "
 *   insn=0x000000000025DEBC string=0x000000000025DEC0 "`"
 *   insn=0x000000000025DEC8 string=0x00000000001F9D70 "0'"
 *   insn=0x000000000025DECC string=0x000000000025DED0 "h"
 *   insn=0x000000000025DED0 string=0x000000000025DEDC "`"
 *   insn=0x000000000025DED8 string=0x00000000001F7160 "0'"
 *   insn=0x000000000025DEE0 string=0x000000000025DEE4 "`b"
 *   insn=0x000000000025DEE0 string=0x000000000025DEF8 "&g"
 *   insn=0x000000000025DEEC string=0x000000000025DEF0 "`"
 *   insn=0x000000000025DEF0 string=0x000000000025DEF4 "@"
 *   insn=0x000000000025DEF4 string=0x000000000025DEFC "`"
 *   insn=0x000000000025DEF8 string=0x00000000001F7B90 "0'"
 *   insn=0x000000000025DF00 string=0x000000000025DF04 "`"
 *   insn=0x000000000025DF0C string=0x000000000025DF10 "`"
 *   insn=0x000000000025DF10 string=0x000000000025DF14 "@"
 *   insn=0x000000000025DF30 string=0x000000000025DF34 "("
 *   insn=0x000000000025DF44 string=0x000000000025DF48 "h.B"
 *   insn=0x000000000025DF4C string=0x000000000025DF50 "@(@"
 *   insn=0x000000000025DF58 string=0x000000000025DF5C "  "
 *   insn=0x000000000025DF68 string=0x000000000025DF6C "*\t@"
 *   insn=0x000000000025DF68 string=0x000000000025DF78 "`VA"
 *   insn=0x000000000025DF6C string=0x000000000025DF70 "J"
 *   insn=0x000000000025DF70 string=0x000000000025DF74 "*\t"
 *   insn=0x000000000025DF78 string=0x000000000025DF7C "iV"
 *   insn=0x000000000025DF7C string=0x000000000025DF80 " "
 *   insn=0x000000000025DF80 string=0x000000000025DF84 "\t@"
 *   insn=0x000000000025DF80 string=0x000000000025DFA4 "h"
 *   insn=0x000000000025DF84 string=0x000000000025DF88 ")"
 *   insn=0x000000000025DF88 string=0x000000000025DF8C "\t"
 *   insn=0x000000000025DF90 string=0x000000000025DF94 ""
 *   insn=0x000000000025DF94 string=0x000000000025DF98 ""
 *   insn=0x000000000025DF9C string=0x000000000025DFA0 "h.B"
 *   insn=0x000000000025DFB4 string=0x000000000025DFB8 "`"
 *   insn=0x000000000025DFC0 string=0x000000000025DFC4 "iB@"
 *   insn=0x000000000025DFC8 string=0x000000000025DFCC "j"
 *   insn=0x000000000025DFCC string=0x000000000025DFD0 " q@"
 *   insn=0x000000000025DFD4 string=0x000000000025DFD8 "Bq@"
 *   insn=0x000000000025DFDC string=0x000000000025DFE0 "!8""
 *   insn=0x000000000025DFE0 string=0x000000000025DFE4 "  "
 *   insn=0x000000000025DFE4 string=0x000000000025DFE8 "  "
 *   insn=0x000000000025DFF0 string=0x000000000025DFF4 "i"
 *   insn=0x000000000025DFFC string=0x000000000025E000 ")"
 *   insn=0x000000000025E000 string=0x000000000025E004 "\t\t"
 *   insn=0x000000000025E008 string=0x000000000025E00C "hN"
 *   insn=0x000000000025E010 string=0x000000000025E014 "@"
 *   insn=0x000000000025E014 string=0x000000000025E018 ""
 *   insn=0x000000000025E018 string=0x000000000025E01C ""
 *   insn=0x000000000025E020 string=0x000000000025E024 ""
 *   insn=0x000000000025E024 string=0x000000000025E028 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::CharControllerComponent::HandleMessage(
        Caver::CharControllerComponent *this,
        int a2,
        float *a3)
{
  __int64 v4; // x20
  int v5; // w8
  __int64 v6; // x8
  float v7; // s9
  __int64 v8; // x8
  float v9; // s8
  _DWORD *v10; // x0
  int v11; // w8
  Caver::SoundEffectComponent *v12; // x0
  __int64 v13; // x8
  int v14; // w8
  Caver::CharAnimControllerComponent *v15; // x0
  _DWORD *v16; // x8
  int v17; // w9
  Caver::SwingableWeaponControllerComponent *v18; // x0
  Caver::SwingableWeaponControllerComponent *v19; // x0
  int v21; // w8
  __int64 v22; // x9
  _DWORD *v23; // x0
  int v24; // w9
  __int64 v25; // x9
  _DWORD *v26; // x0
  int v27; // w8

  switch ( a2 )
  {
    case 7:
      if ( !*(_BYTE *)(*(_QWORD *)a3 + 379LL) )
        return 0;
      v4 = *((_QWORD *)a3 + 1);
      v5 = *(_DWORD *)(v4 + 384);
      switch ( v5 )
      {
        case 3:
          goto LABEL_6;
        case 2:
          if ( fabsf(a3[11]) < 0.1 )
          {
            v21 = *((_DWORD *)this + 139);
            if ( v21 )
            {
              if ( (float)(a3[10] * (float)v21) < 0.0 )
              {
                v22 = *(_QWORD *)(v4 + 40);
                if ( v22 )
                  ++*(_DWORD *)(v22 + 8);
                v23 = (_DWORD *)*((_QWORD *)this + 85);
                *((_QWORD *)this + 85) = v22;
                if ( v23 )
                {
                  v24 = v23[2] - 1;
                  v23[2] = v24;
                  if ( !v24 )
                  {
                    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v23 + 8LL))(v23);
                    v21 = *((_DWORD *)this + 139);
                  }
                }
                *((_DWORD *)this + 172) = v21;
                *((_DWORD *)this + 173) = 0;
              }
            }
          }
          break;
        case 1:
LABEL_6:
          if ( !*((_BYTE *)this + 701) )
          {
            if ( v5 == 3 )
            {
              v6 = *(_QWORD *)(v4 + 40);
              *((_DWORD *)this + 164) = 3;
              if ( !v6 )
              {
LABEL_73:
                v26 = (_DWORD *)*((_QWORD *)this + 83);
                *((_QWORD *)this + 83) = v6;
                if ( v26 )
                {
                  v27 = v26[2] - 1;
                  v26[2] = v27;
                  if ( !v27 )
                    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v26 + 8LL))(v26);
                }
                *((_DWORD *)this + 168) = 0;
                return 0;
              }
LABEL_72:
              ++*(_DWORD *)(v6 + 8);
              goto LABEL_73;
            }
            v25 = *((_QWORD *)this + 16);
            if ( !v25 )
            {
              Caver::ComponentOutletBase::Connect((Caver::CharControllerComponent *)((char *)this + 112), this);
              v25 = *((_QWORD *)this + 16);
            }
            v6 = *(_QWORD *)(v4 + 40);
            if ( (float)((float)(*(float *)(v6 + 112) - *(float *)(*((_QWORD *)this + 5) + 112LL))
                       * (float)*(int *)(v25 + 112)) > 0.0 )
            {
              *((_DWORD *)this + 164) = *(_DWORD *)(v4 + 384);
              if ( !v6 )
                goto LABEL_73;
              goto LABEL_72;
            }
          }
          break;
        default:
          return 0;
      }
      return 0;
    case 10:
      if ( *(_DWORD *)(*(_QWORD *)a3 + 180LL) != 1 )
        *((_DWORD *)this + 152) = 0;
      if ( *((_BYTE *)this + 580) )
        *((_BYTE *)this + 580) = 0;
      Caver::CharControllerComponent::Hurt(this);
      return 0;
    case 11:
      if ( *((_BYTE *)this + 580) )
        *((_BYTE *)this + 580) = 0;
      Caver::CharControllerComponent::Die(this);
      return 0;
    case 21:
      v7 = a3[7];
      v8 = *(_QWORD *)a3;
      v9 = a3[11];
      if ( *(_QWORD *)a3 )
        ++*(_DWORD *)(v8 + 8);
      v10 = (_DWORD *)*((_QWORD *)this + 81);
      *((_QWORD *)this + 81) = v8;
      if ( v10 )
      {
        v11 = v10[2] - 1;
        v10[2] = v11;
        if ( !v11 )
          (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v10 + 8LL))(v10);
      }
      if ( v9 < -0.7 && *((_DWORD *)this + 148) == 3 )
        *((_BYTE *)this + 588) = 0;
      if ( v9 > 0.7 && v7 < -250.0 )
      {
        if ( *((_BYTE *)this + 604) )
        {
          v12 = (Caver::SoundEffectComponent *)*((_QWORD *)this + 49);
          if ( v12
            || (Caver::ComponentOutletBase::Connect((Caver::CharControllerComponent *)((char *)this + 376), this),
                (v12 = (Caver::SoundEffectComponent *)*((_QWORD *)this + 49)) != 0) )
          {
            Caver::SoundEffectComponent::Play(v12);
          }
        }
      }
      if ( fabsf(v9) < 0.4 && *((_BYTE *)this + 580) )
        *((_BYTE *)this + 580) = 0;
      v13 = *((_QWORD *)this + 16);
      if ( !v13 )
      {
        Caver::ComponentOutletBase::Connect((Caver::CharControllerComponent *)((char *)this + 112), this);
        v13 = *((_QWORD *)this + 16);
      }
      if ( *(float *)(v13 + 128) < 0.1 && *(float *)(v13 + 140) > 0.0 && !*(_BYTE *)(v13 + 144) )
      {
        v14 = *((_DWORD *)this + 148);
        *((_BYTE *)this + 604) = 0;
        if ( !v14 )
        {
          v15 = (Caver::CharAnimControllerComponent *)*((_QWORD *)this + 50);
          if ( v15 )
            goto LABEL_49;
          v15 = (Caver::CharAnimControllerComponent *)*((_QWORD *)this + 19);
          if ( v15
            || (Caver::ComponentOutletBase::Connect((Caver::CharControllerComponent *)((char *)this + 136), this),
                (v15 = (Caver::CharAnimControllerComponent *)*((_QWORD *)this + 19)) != 0) )
          {
            ++*((_DWORD *)v15 + 2);
          }
          v16 = (_DWORD *)*((_QWORD *)this + 50);
          *((_QWORD *)this + 50) = v15;
          if ( v16 )
          {
            v17 = v16[2] - 1;
            v16[2] = v17;
            if ( !v17 )
            {
              (*(void (__fastcall **)(_DWORD *__return_ptr, _DWORD *))(*(_QWORD *)v16 + 8LL))(v16, v16);
              v15 = (Caver::CharAnimControllerComponent *)*((_QWORD *)this + 50);
            }
          }
          if ( v15 )
LABEL_49:
            Caver::CharAnimControllerComponent::StandOnGround(v15);
        }
      }
      if ( *((_BYTE *)this + 701) )
        Caver::CharControllerComponent::UpdatePickupObjectPosition(this);
      v18 = (Caver::SwingableWeaponControllerComponent *)*((_QWORD *)this + 53);
      if ( v18
        || (Caver::ComponentOutletBase::Connect((Caver::CharControllerComponent *)((char *)this + 408), this),
            (v18 = (Caver::SwingableWeaponControllerComponent *)*((_QWORD *)this + 53)) != 0) )
      {
        Caver::SwingableWeaponControllerComponent::UpdateWeaponTransform(v18);
      }
      v19 = (Caver::SwingableWeaponControllerComponent *)*((_QWORD *)this + 56);
      if ( v19
        || (Caver::ComponentOutletBase::Connect((Caver::CharControllerComponent *)((char *)this + 432), this),
            (v19 = (Caver::SwingableWeaponControllerComponent *)*((_QWORD *)this + 56)) != 0) )
      {
        Caver::SwingableWeaponControllerComponent::UpdateWeaponTransform(v19);
      }
      return 0;
    default:
      return 0;
  }
}

