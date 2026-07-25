/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002CA0A8
 * Mangled: _ZN5Caver14SwingComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE
 * Demangled: Caver::SwingComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callers: 1
 *   0x00000000001FE8A0  Caver::SwingComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callees: 3
 *   0x00000000001F7AE0  Caver::ComponentOutletBase::Connect(Caver::Component const*)
 *   0x00000000001F9320  Caver::Component::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x00000000001FED40  Caver::KeyframeAnimationComponent::LoadAnimation(void)
 *
 * Referenced strings: 73
 *   insn=0x00000000002CA0C8 string=0x00000000002CA0CC "H"
 *   insn=0x00000000002CA0CC string=0x00000000002CA0D0 "\t"
 *   insn=0x00000000002CA0D0 string=0x00000000002CA0D8 "(y"
 *   insn=0x00000000002CA0D8 string=0x00000000002CA0DC ""
 *   insn=0x00000000002CA0E0 string=0x00000000002CA164 "uB@"
 *   insn=0x00000000002CA0E0 string=0x00000000002CA238 "uB@"
 *   insn=0x00000000002CA0E4 string=0x00000000002CA0E8 ""
 *   insn=0x00000000002CA0E8 string=0x00000000002CA0EC "hB"
 *   insn=0x00000000002CA100 string=0x00000000001F9320 "0'"
 *   insn=0x00000000002CA104 string=0x00000000002CA108 "tB@"
 *   insn=0x00000000002CA10C string=0x00000000002CA110 "`"
 *   insn=0x00000000002CA114 string=0x00000000002CA118 "r"
 *   insn=0x00000000002CA118 string=0x00000000002CA11C "tB@"
 *   insn=0x00000000002CA118 string=0x00000000001F7AE0 "0'"
 *   insn=0x00000000002CA124 string=0x00000000002CA128 "@"
 *   insn=0x00000000002CA12C string=0x00000000002CA144 "tB@"
 *   insn=0x00000000002CA138 string=0x00000000002CA13C "@"
 *   insn=0x00000000002CA14C string=0x00000000002CA150 "`"
 *   insn=0x00000000002CA150 string=0x00000000002CA2D0 "`"
 *   insn=0x00000000002CA154 string=0x00000000002CA158 ""
 *   insn=0x00000000002CA158 string=0x00000000002CA15C "hF"
 *   insn=0x00000000002CA15C string=0x00000000002CA160 "v"
 *   insn=0x00000000002CA168 string=0x00000000002CA16C "`"
 *   insn=0x00000000002CA170 string=0x00000000002CA174 "["
 *   insn=0x00000000002CA174 string=0x00000000002CA178 "uB@"
 *   insn=0x00000000002CA180 string=0x00000000002CA184 "@"
 *   insn=0x00000000002CA188 string=0x00000000002CA1A0 "uB@"
 *   insn=0x00000000002CA194 string=0x00000000002CA198 "@"
 *   insn=0x00000000002CA1A4 string=0x00000000002CA1A8 "`"
 *   insn=0x00000000002CA1AC string=0x00000000002CA1B0 "L"
 *   insn=0x00000000002CA1B0 string=0x00000000002CA1B4 "uB@"
 *   insn=0x00000000002CA1B8 string=0x00000000002CA1BC "@"
 *   insn=0x00000000002CA1CC string=0x00000000002CA1D0 "@"
 *   insn=0x00000000002CA1D8 string=0x00000000002CA1DC "!"
 *   insn=0x00000000002CA1E4 string=0x00000000002CA1E8 "#H "
 *   insn=0x00000000002CA1E8 string=0x00000000002CA1EC "` ""
 *   insn=0x00000000002CA1F0 string=0x00000000002CA1F4 "tB@"
 *   insn=0x00000000002CA1F0 string=0x00000000002CA30C "(  "
 *   insn=0x00000000002CA1F8 string=0x00000000002CA1FC "`"
 *   insn=0x00000000002CA200 string=0x00000000002CA204 "7"
 *   insn=0x00000000002CA204 string=0x00000000002CA208 "tB@"
 *   insn=0x00000000002CA20C string=0x00000000002CA210 "@"
 *   insn=0x00000000002CA220 string=0x00000000002CA224 "@"
 *   insn=0x00000000002CA22C string=0x00000000002CA230 "`"
 *   insn=0x00000000002CA230 string=0x00000000002CA234 "A"
 *   insn=0x00000000002CA23C string=0x00000000002CA240 "`"
 *   insn=0x00000000002CA244 string=0x00000000002CA248 "&"
 *   insn=0x00000000002CA248 string=0x00000000002CA24C "uB@"
 *   insn=0x00000000002CA24C string=0x00000000002CA250 "U"
 *   insn=0x00000000002CA254 string=0x00000000002CA258 "@"
 *   insn=0x00000000002CA25C string=0x00000000002CA274 "uB@"
 *   insn=0x00000000002CA268 string=0x00000000002CA26C "@"
 *   insn=0x00000000002CA26C string=0x00000000002CA270 "H"
 *   insn=0x00000000002CA278 string=0x00000000002CA27C "`"
 *   insn=0x00000000002CA284 string=0x00000000002CA288 "uB@"
 *   insn=0x00000000002CA28C string=0x00000000002CA290 "@"
 *   insn=0x00000000002CA2A0 string=0x00000000002CA2A4 "@"
 *   insn=0x00000000002CA2AC string=0x00000000002CA2B0 "!"
 *   insn=0x00000000002CA2B8 string=0x00000000002CA2BC "#H "
 *   insn=0x00000000002CA2BC string=0x00000000002CA2C0 "` ""
 *   insn=0x00000000002CA2C4 string=0x00000000002CA2C8 "tB@"
 *   insn=0x00000000002CA2C4 string=0x00000000002CA320 "(  "
 *   insn=0x00000000002CA2D8 string=0x00000000002CA2DC "tB@"
 *   insn=0x00000000002CA2E0 string=0x00000000002CA2E4 "@"
 *   insn=0x00000000002CA2F4 string=0x00000000002CA2F8 "@"
 *   insn=0x00000000002CA300 string=0x00000000002CA304 "`"
 *   insn=0x00000000002CA30C string=0x00000000002CA310 "D"
 *   insn=0x00000000002CA310 string=0x00000000002CA314 " "
 *   insn=0x00000000002CA310 string=0x00000000002CA318 "`"
 *   insn=0x00000000002CA318 string=0x00000000002CA31C ""
 *   insn=0x00000000002CA320 string=0x00000000002CA324 "D"
 *   insn=0x00000000002CA324 string=0x00000000002CA328 " "
 *   insn=0x00000000002CA324 string=0x00000000002CA32C "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::SwingComponent::SetValueForBindedProperty(
        __int64 this,
        int a2,
        const Caver::BindingValue *a3)
{
  __int64 v5; // x19
  Caver::KeyframeAnimationComponent *v6; // x20
  Caver::KeyframeAnimationComponent *v7; // x20
  Caver::KeyframeAnimationComponent *v8; // x21
  Caver::KeyframeAnimationComponent *v9; // x21
  __int64 v10; // x8
  float v11; // s1
  int v12; // s0
  Caver::KeyframeAnimationComponent *v13; // x20
  __int64 v14; // x8
  Caver::KeyframeAnimationComponent *v15; // x21
  Caver::KeyframeAnimationComponent *v16; // x21
  __int64 v17; // x8
  float v18; // s1
  int v19; // s0
  __int64 v20; // x8

  v5 = this;
  switch ( a2 )
  {
    case 1:
      *(_BYTE *)(this + 144) = **((_BYTE **)a3 + 1);
      break;
    case 2:
      *(_BYTE *)(this + 145) = **((_BYTE **)a3 + 1);
      break;
    case 3:
      v8 = *(Caver::KeyframeAnimationComponent **)(this + 128);
      if ( v8
        || (this = Caver::ComponentOutletBase::Connect(
                     (Caver::ComponentOutletBase *)(this + 112),
                     (const Caver::Component *)this),
            (v8 = *(Caver::KeyframeAnimationComponent **)(v5 + 128)) != 0) )
      {
        if ( *(_QWORD *)(*((_QWORD *)v8 + 18) + 24LL)
          || (this = Caver::KeyframeAnimationComponent::LoadAnimation(v8), *(_QWORD *)(*((_QWORD *)v8 + 18) + 24LL)) )
        {
          v9 = *(Caver::KeyframeAnimationComponent **)(v5 + 128);
          if ( !v9 )
          {
            this = Caver::ComponentOutletBase::Connect(
                     (Caver::ComponentOutletBase *)(v5 + 112),
                     (const Caver::Component *)v5);
            v9 = *(Caver::KeyframeAnimationComponent **)(v5 + 128);
          }
          v10 = *(_QWORD *)(*((_QWORD *)v9 + 18) + 24LL);
          if ( !v10 )
          {
            this = Caver::KeyframeAnimationComponent::LoadAnimation(v9);
            v10 = *(_QWORD *)(*((_QWORD *)v9 + 18) + 24LL);
          }
          v11 = **((float **)a3 + 1);
          v12 = 0;
          if ( fmaxf(v11, 0.0) <= (float)*(int *)(v10 + 8) )
          {
            if ( v11 >= 0.0 )
              v12 = **((_DWORD **)a3 + 1);
            *(_DWORD *)(v5 + 136) = v12;
          }
          else
          {
            v13 = *(Caver::KeyframeAnimationComponent **)(v5 + 128);
            if ( !v13 )
            {
              this = Caver::ComponentOutletBase::Connect(
                       (Caver::ComponentOutletBase *)(v5 + 112),
                       (const Caver::Component *)v5);
              v13 = *(Caver::KeyframeAnimationComponent **)(v5 + 128);
            }
            v14 = *(_QWORD *)(*((_QWORD *)v13 + 18) + 24LL);
            if ( !v14 )
            {
              this = Caver::KeyframeAnimationComponent::LoadAnimation(v13);
              v14 = *(_QWORD *)(*((_QWORD *)v13 + 18) + 24LL);
            }
            *(float *)(v5 + 136) = (float)*(int *)(v14 + 8);
          }
        }
      }
      break;
    case 4:
      v15 = *(Caver::KeyframeAnimationComponent **)(this + 128);
      if ( v15
        || (this = Caver::ComponentOutletBase::Connect(
                     (Caver::ComponentOutletBase *)(this + 112),
                     (const Caver::Component *)this),
            (v15 = *(Caver::KeyframeAnimationComponent **)(v5 + 128)) != 0) )
      {
        if ( *(_QWORD *)(*((_QWORD *)v15 + 18) + 24LL)
          || (this = Caver::KeyframeAnimationComponent::LoadAnimation(v15), *(_QWORD *)(*((_QWORD *)v15 + 18) + 24LL)) )
        {
          v16 = *(Caver::KeyframeAnimationComponent **)(v5 + 128);
          if ( !v16 )
          {
            this = Caver::ComponentOutletBase::Connect(
                     (Caver::ComponentOutletBase *)(v5 + 112),
                     (const Caver::Component *)v5);
            v16 = *(Caver::KeyframeAnimationComponent **)(v5 + 128);
          }
          v17 = *(_QWORD *)(*((_QWORD *)v16 + 18) + 24LL);
          if ( !v17 )
          {
            this = Caver::KeyframeAnimationComponent::LoadAnimation(v16);
            v17 = *(_QWORD *)(*((_QWORD *)v16 + 18) + 24LL);
          }
          v18 = **((float **)a3 + 1);
          v19 = 0;
          if ( fmaxf(v18, 0.0) > (float)*(int *)(v17 + 8) )
          {
            v7 = *(Caver::KeyframeAnimationComponent **)(v5 + 128);
            if ( v7 )
              goto LABEL_36;
            goto LABEL_35;
          }
          if ( v18 >= 0.0 )
            v19 = **((_DWORD **)a3 + 1);
          *(_DWORD *)(v5 + 140) = v19;
        }
      }
      break;
    default:
      this = Caver::Component::SetValueForBindedProperty((Caver::Component *)this, a2, a3);
      if ( !a2 )
      {
        v6 = *(Caver::KeyframeAnimationComponent **)(v5 + 128);
        if ( (v6
           || (this = Caver::ComponentOutletBase::Connect(
                        (Caver::ComponentOutletBase *)(v5 + 112),
                        (const Caver::Component *)v5),
               (v6 = *(Caver::KeyframeAnimationComponent **)(v5 + 128)) != 0))
          && (*(_QWORD *)(*((_QWORD *)v6 + 18) + 24LL)
           || (this = Caver::KeyframeAnimationComponent::LoadAnimation(v6), *(_QWORD *)(*((_QWORD *)v6 + 18) + 24LL))) )
        {
          v7 = *(Caver::KeyframeAnimationComponent **)(v5 + 128);
          *(_DWORD *)(v5 + 136) = 0;
          if ( !v7 )
          {
LABEL_35:
            this = Caver::ComponentOutletBase::Connect(
                     (Caver::ComponentOutletBase *)(v5 + 112),
                     (const Caver::Component *)v5);
            v7 = *(Caver::KeyframeAnimationComponent **)(v5 + 128);
          }
LABEL_36:
          v20 = *(_QWORD *)(*((_QWORD *)v7 + 18) + 24LL);
          if ( !v20 )
          {
            this = Caver::KeyframeAnimationComponent::LoadAnimation(v7);
            v20 = *(_QWORD *)(*((_QWORD *)v7 + 18) + 24LL);
          }
          *(float *)(v5 + 140) = (float)*(int *)(v20 + 8);
        }
        else
        {
          *(_QWORD *)(v5 + 136) = 0;
        }
      }
      break;
  }
  return this;
}

