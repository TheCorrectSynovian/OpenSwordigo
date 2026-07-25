/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000288320
 * Mangled: _ZN5Caver23MagicExplosionComponent13HandleMessageEiPv
 * Demangled: Caver::MagicExplosionComponent::HandleMessage(int,void *)
 *
 * Callers: 0
 *
 * Callees: 17
 *   0x00000000001F3820  Caver::RenderingContext::SetDefaultBlendFunc(void)
 *   0x00000000001F3DF0  Caver::DamageComponent::AddPotentialImpact(boost::intrusive_ptr<Caver::SceneObject> const&,Caver::Vector2 const&,Caver::Vector2 const&,bool,Caver::Vector4 const&)
 *   0x00000000001F5ED0  Caver::RenderingContext::UseProgram(uint)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F8E10  Caver::Vector2::Normalize(void)
 *   0x00000000001FB1A0  Caver::RenderingContext::SetColor(Caver::Color const&)
 *   0x00000000001FBCC0  Caver::Matrix4::RotationZ(float)
 *   0x00000000001FC450  Caver::RenderingContext::SetBlendingEnabled(bool)
 *   0x00000000001FCDA0  Caver::Sprite::Draw(Caver::RenderingContext *)
 *   0x00000000001FE5E0  Caver::SceneObject::HandleMessage(int,void *)
 *   0x00000000001FE920  Caver::RenderingContext::SetVertexAttribPointer(uint,int,Caver::DataType,int,void const*)
 *   0x00000000001FEBA0  Caver::RenderingContext::SetMatrix(Caver::Matrix4 const&)
 *   0x00000000001FFE90  C_Matrix4Mul(float const*,float const*,float *)
 *   0x0000000000200F90  Caver::Color::FromFloatColor(Caver::FloatColor const&)
 *   0x0000000000201770  Caver::RenderingContext::DrawElements(int,int,Caver::DataType,void const*)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 83
 *   insn=0x0000000000288330 string=0x0000000000288334 "V"
 *   insn=0x0000000000288338 string=0x000000000028833C "?4"
 *   insn=0x0000000000288344 string=0x0000000000288348 "?"
 *   insn=0x000000000028834C string=0x0000000000288350 "?"
 *   insn=0x000000000028834C string=0x0000000000288368 "H"
 *   insn=0x0000000000288354 string=0x0000000000288358 ""
 *   insn=0x000000000028835C string=0x0000000000288360 "\t"
 *   insn=0x0000000000288360 string=0x0000000000288364 "3"
 *   insn=0x0000000000288368 string=0x000000000028836C "("
 *   insn=0x000000000028836C string=0x0000000000288370 "H"
 *   insn=0x0000000000288370 string=0x0000000000288374 ""
 *   insn=0x0000000000288378 string=0x000000000028837C "H"
 *   insn=0x000000000028837C string=0x0000000000288380 "\t"
 *   insn=0x0000000000288380 string=0x0000000000288384 "i"
 *   insn=0x0000000000288388 string=0x000000000028838C "3"
 *   insn=0x000000000028838C string=0x0000000000288390 "i"
 *   insn=0x0000000000288390 string=0x0000000000288394 "?\t"
 *   insn=0x0000000000288398 string=0x000000000028839C "i"
 *   insn=0x00000000002883B0 string=0x00000000002883B4 ""
 *   insn=0x00000000002883C4 string=0x00000000002883C8 " "
 *   insn=0x00000000002883D4 string=0x00000000001F8E10 "0'"
 *   insn=0x00000000002883F4 string=0x00000000001F3DF0 "P'"
 *   insn=0x00000000002883FC string=0x0000000000288400 "@"
 *   insn=0x0000000000288400 string=0x0000000000288404 ""
 *   insn=0x0000000000288404 string=0x0000000000288408 ""
 *   insn=0x0000000000288408 string=0x000000000028840C "!"
 *   insn=0x000000000028840C string=0x0000000000288410 ""
 *   insn=0x0000000000288410 string=0x0000000000288414 ""
 *   insn=0x0000000000288420 string=0x0000000000288424 "`"
 *   insn=0x0000000000288428 string=0x000000000028842C "m"
 *   insn=0x0000000000288458 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000288460 string=0x0000000000288464 "t"
 *   insn=0x0000000000288464 string=0x0000000000288468 "\n"
 *   insn=0x0000000000288470 string=0x0000000000288474 ""
 *   insn=0x0000000000288480 string=0x0000000000288484 ""
 *   insn=0x00000000002884B4 string=0x00000000002884B8 "V"
 *   insn=0x00000000002884DC string=0x00000000001FC450 "0'"
 *   insn=0x00000000002884E4 string=0x00000000001F3820 "P'"
 *   insn=0x00000000002884EC string=0x00000000002884F0 "x"
 *   insn=0x00000000002884F0 string=0x00000000001F5ED0 "P'"
 *   insn=0x0000000000288518 string=0x000000000028851C "#"
 *   insn=0x0000000000288538 string=0x000000000028853C "@"
 *   insn=0x0000000000288540 string=0x0000000000288544 "!%"
 *   insn=0x0000000000288544 string=0x0000000000288548 "\t9@"
 *   insn=0x0000000000288548 string=0x000000000028854C "y@"
 *   insn=0x000000000028854C string=0x0000000000288550 "B"
 *   insn=0x000000000028857C string=0x0000000000288580 "D"
 *   insn=0x000000000028858C string=0x00000000001FBCC0 "0'"
 *   insn=0x0000000000288598 string=0x000000000028859C "="
 *   insn=0x00000000002885CC string=0x00000000002885D0 "0"
 *   insn=0x00000000002885D8 string=0x00000000002885DC "q"
 *   insn=0x00000000002885E8 string=0x00000000002885EC "#"
 *   insn=0x00000000002885F4 string=0x00000000002885F8 "^"
 *   insn=0x0000000000288608 string=0x000000000028860C "\t9@"
 *   insn=0x000000000028860C string=0x0000000000288610 "y@"
 *   insn=0x000000000028868C string=0x0000000000288690 "D"
 *   insn=0x000000000028869C string=0x00000000002886A0 "#"
 *   insn=0x00000000002886A8 string=0x00000000002886AC "1"
 *   insn=0x00000000002886B0 string=0x00000000002886B4 "("
 *   insn=0x00000000002886C8 string=0x00000000002886CC "!"
 *   insn=0x00000000002886D0 string=0x00000000002886D4 "/"
 *   insn=0x00000000002886E4 string=0x00000000002886E8 "   "
 *   insn=0x00000000002886E8 string=0x00000000002886EC "M"
 *   insn=0x00000000002886F0 string=0x00000000002886F4 "!8 "
 *   insn=0x00000000002886FC string=0x0000000000288700 " "
 *   insn=0x0000000000288704 string=0x0000000000288708 "@8 "
 *   insn=0x000000000028870C string=0x0000000000288710 "c"
 *   insn=0x0000000000288718 string=0x000000000028871C "!"
 *   insn=0x0000000000288720 string=0x0000000000288724 "h"
 *   insn=0x0000000000288724 string=0x0000000000288728 "B"
 *   insn=0x000000000028873C string=0x0000000000288740 "+"
 *   insn=0x0000000000288740 string=0x0000000000288744 ""
 *   insn=0x0000000000288744 string=0x0000000000288748 "?"
 *   insn=0x000000000028874C string=0x0000000000288750 ")"
 *   insn=0x0000000000288754 string=0x0000000000288758 "k"
 *   insn=0x000000000028875C string=0x0000000000288760 "("
 *   insn=0x0000000000288764 string=0x0000000000288768 "h"
 *   insn=0x0000000000288768 string=0x000000000028876C "("
 *   insn=0x0000000000288788 string=0x00000000001FB1A0 "0'"
 *   insn=0x0000000000288798 string=0x000000000028879C "\t9@"
 *   insn=0x000000000028879C string=0x00000000002887A0 "y@"
 *   insn=0x0000000000288810 string=0x0000000000288814 "c"
 *   insn=0x0000000000288814 string=0x00000000001FCDA0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::MagicExplosionComponent::HandleMessage(
        Caver::MagicExplosionComponent *this,
        int a2,
        void *a3)
{
  __int64 v3; // x8
  __int64 v4; // x19
  float32x2_t *v5; // x20
  float32x2_t *v6; // x0
  int v7; // w8
  Caver::SceneObject *v8; // x0
  unsigned __int64 v10; // [xsp+2F8h] [xbp-38h] BYREF
  float32x2_t *v11; // [xsp+300h] [xbp-30h]
  __int64 v12; // [xsp+308h] [xbp-28h]

  v12 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  switch ( a2 )
  {
    case 13:
      v8 = (Caver::SceneObject *)*((_QWORD *)this + 48);
      if ( v8 )
        Caver::SceneObject::HandleMessage(v8, 13, a3);
      break;
    case 7:
      if ( *((_BYTE *)a3 + 52) )
      {
        if ( *(_BYTE *)(*(_QWORD *)a3 + 381LL) )
        {
          v3 = *((_QWORD *)a3 + 1);
          if ( *(_BYTE *)(v3 + 380) )
          {
            v4 = *((_QWORD *)this + 20);
            if ( v4 )
            {
              if ( *(_DWORD *)(v4 + 184) == 2 && *(_BYTE *)(v4 + 188) )
              {
                v5 = *(float32x2_t **)(v3 + 40);
                v11 = v5;
                if ( v5 )
                  ++v5[1].n64_u32[0];
                v10 = vsub_f32(v5[14], *(float32x2_t *)(*((_QWORD *)this + 5) + 112LL)).n64_u64[0];
                Caver::Vector2::Normalize((Caver::Vector2 *)&v10);
                Caver::DamageComponent::AddPotentialImpact();
                v6 = v11;
                if ( v11 )
                {
                  v7 = v11[1].n64_u32[0] - 1;
                  v11[1].n64_u32[0] = v7;
                  if ( !v7 )
                    (*(void (__fastcall **)(float32x2_t *))(v6->n64_u64[0] + 8))(v6);
                }
              }
            }
          }
        }
      }
      break;
    case 6:
      *(_BYTE *)(*((_QWORD *)this + 5) + 232LL) = 1;
      break;
  }
  return 0;
}

