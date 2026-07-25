/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000269460
 * Mangled: _ZN5Caver15EntityComponent13HandleMessageEiPv
 * Demangled: Caver::EntityComponent::HandleMessage(int,void *)
 *
 * Callers: 1
 *   0x00000000001FF240  Caver::EntityComponent::HandleMessage(int,void *)
 *
 * Callees: 7
 *   0x00000000001F3FD0  Caver::CollisionShapeComponent::collisionShape(void)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FC2B0  Caver::EntityComponent::HandleGroundCollision(Caver::CollisionMessageData const&)
 *   0x00000000001FE5E0  Caver::SceneObject::HandleMessage(int,void *)
 *   0x00000000001FF2B0  Caver::CollisionShape::CollidesWithShape(Caver::CollisionShape const&,float,Caver::CollisionInfo *)
 *   0x00000000002005E0  Caver::SceneObject::ComponentWithInterface(long)
 *   0x00000000002618B0  Caver::PhysicsObjectComponent::Interface(void)
 *
 * Referenced strings: 45
 *   insn=0x0000000000269480 string=0x0000000000269484 "Y"
 *   insn=0x0000000000269484 string=0x0000000000269488 "("
 *   insn=0x0000000000269490 string=0x0000000000269494 "?$"
 *   insn=0x000000000026949C string=0x00000000002694A0 "?"
 *   insn=0x000000000026949C string=0x00000000002695BC "hRD9"
 *   insn=0x00000000002694A4 string=0x00000000002695C4 "("
 *   insn=0x00000000002694D8 string=0x00000000002694DC "H"
 *   insn=0x00000000002694E0 string=0x00000000002694E4 ""
 *   insn=0x00000000002694EC string=0x0000000000587F44 "fff"
 *   insn=0x00000000002694F0 string=0x00000000002694F4 "(EO"
 *   insn=0x00000000002694FC string=0x0000000000269500 ""
 *   insn=0x0000000000269520 string=0x0000000000269524 "Z"
 *   insn=0x000000000026953C string=0x0000000000269540 "(\"
 *   insn=0x000000000026954C string=0x0000000000269550 "XK"
 *   insn=0x0000000000269550 string=0x00000000001FC2B0 "0'"
 *   insn=0x0000000000269554 string=0x0000000000269558 "h"
 *   insn=0x0000000000269558 string=0x000000000026955C "i"
 *   insn=0x0000000000269570 string=0x0000000000269574 "`"
 *   insn=0x0000000000269588 string=0x00000000001F3FD0 "P'"
 *   insn=0x00000000002695A4 string=0x00000000002695A8 "BW"
 *   insn=0x00000000002695AC string=0x00000000002695B0 "_"
 *   insn=0x00000000002695B0 string=0x00000000002695B4 "c"
 *   insn=0x0000000000269600 string=0x0000000000269604 ""
 *   insn=0x0000000000269618 string=0x0000000000584430 "333?"
 *   insn=0x0000000000269628 string=0x000000000026962C "h"
 *   insn=0x000000000026963C string=0x0000000000269640 "!""
 *   insn=0x0000000000269640 string=0x0000000000269644 "c "
 *   insn=0x0000000000269644 string=0x0000000000269648 "!(#"
 *   insn=0x0000000000269648 string=0x000000000026964C "  ("
 *   insn=0x0000000000269654 string=0x0000000000269658 "c"
 *   insn=0x0000000000269658 string=0x000000000026965C "$5D"
 *   insn=0x0000000000269668 string=0x000000000026966C "` $"
 *   insn=0x0000000000269670 string=0x0000000000269674 "c"
 *   insn=0x0000000000269674 string=0x0000000000269678 "h  "
 *   insn=0x0000000000269678 string=0x000000000026967C "-"
 *   insn=0x000000000026967C string=0x0000000000269680 "d"
 *   insn=0x0000000000269684 string=0x0000000000269688 "%AO"
 *   insn=0x0000000000269684 string=0x0000000000587F40 "33s"
 *   insn=0x0000000000269688 string=0x000000000026968C "` "
 *   insn=0x0000000000269690 string=0x0000000000269694 "@( "
 *   insn=0x0000000000269698 string=0x000000000026969C "M"
 *   insn=0x00000000002696AC string=0x00000000002696B0 ""9@"
 *   insn=0x00000000002696B4 string=0x00000000002696B8 ")"
 *   insn=0x00000000002696D4 string=0x00000000002696D8 "`"
 *   insn=0x00000000002696EC string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::EntityComponent::HandleMessage(Caver::EntityComponent *this, int a2, float32x2_t *a3)
{
  __int128 v4; // q0
  Caver::CollisionShapeComponent *v5; // x21
  unsigned __int64 v6; // x22
  unsigned int v7; // w26
  char v8; // w0
  unsigned __int64 v10; // x21
  unsigned __int64 v11; // x22
  float v12; // w23
  float32x2_t *v13; // x8
  float v14; // w24
  float v15; // s8
  unsigned __int64 v16; // x27
  unsigned __int64 v17; // x28
  unsigned __int8 v18; // w26
  float v19; // s3
  unsigned __int64 v20; // d9
  Caver::CollisionShapeComponent *v21; // [xsp+8h] [xbp-C8h] BYREF
  unsigned __int64 v22; // [xsp+10h] [xbp-C0h]
  __int128 v23; // [xsp+18h] [xbp-B8h]
  __int128 v24; // [xsp+28h] [xbp-A8h]
  float v25; // [xsp+38h] [xbp-98h]
  unsigned __int8 v26; // [xsp+3Ch] [xbp-94h]
  __int128 v27; // [xsp+40h] [xbp-90h]
  __int128 v28; // [xsp+50h] [xbp-80h]
  unsigned __int32 v29; // [xsp+60h] [xbp-70h]
  unsigned __int8 v30; // [xsp+64h] [xbp-6Ch]
  __int64 v31; // [xsp+68h] [xbp-68h]

  v31 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( a2 == 9 )
  {
    if ( !*((_BYTE *)this + 276) )
    {
      v10 = a3->n64_u64[0];
      if ( *(_BYTE *)(a3->n64_u64[0] + 379) )
      {
        v11 = a3[1].n64_u64[0];
        if ( *(_BYTE *)(v11 + 378) )
        {
          v12 = a3[5].n64_f32[1];
          if ( v12 < 0.7 )
          {
            v13 = (float32x2_t *)*((_QWORD *)this + 5);
            v14 = a3[5].n64_f32[0];
            v15 = a3[6].n64_f32[0];
            if ( (float)((float)(v13[13].n64_f32[0] * v14) + (float)(v13[13].n64_f32[1] * v12)) < v15 )
            {
              v17 = a3[3].n64_u64[0];
              v16 = a3[4].n64_u64[0];
              v18 = a3[6].n64_u8[4];
              if ( *((float *)this + 32) >= 0.1
                || (v19 = *((float *)this + 35), v19 <= 0.0)
                || (float)((float)(*((float *)this + 34) * v14) + (float)(v19 * v12)) > -0.95 )
              {
                v20 = vadd_f32(a3[2], vsub_f32(v13[14], *(float32x2_t *)(*(_QWORD *)(v10 + 40) + 112LL))).n64_u64[0];
                Caver::EntityComponent::HandleGroundCollision();
                v21 = (Caver::CollisionShapeComponent *)v10;
                v22 = v11;
                *(_QWORD *)&v23 = v20;
                *((_QWORD *)&v23 + 1) = v17;
                *(_QWORD *)&v24 = v16;
                *((_QWORD *)&v24 + 1) = __PAIR64__(LODWORD(v12), LODWORD(v14));
                v25 = v15;
                v26 = v18;
                Caver::SceneObject::HandleMessage(*((Caver::SceneObject **)this + 5), 21, &v21);
              }
            }
          }
        }
      }
    }
  }
  else if ( a2 == 7 )
  {
    v27 = *(_OWORD *)a3[2].n64_u64;
    v4 = *(_OWORD *)a3[4].n64_u64;
    v28 = v4;
    v30 = a3[6].n64_u8[4];
    v29 = a3[6].n64_u32[0];
    v5 = (Caver::CollisionShapeComponent *)a3->n64_u64[0];
    if ( *(_BYTE *)(a3->n64_u64[0] + 379) )
    {
      v6 = a3[1].n64_u64[0];
      if ( *(_BYTE *)(v6 + 378) )
      {
        if ( !*(_QWORD *)(*(_QWORD *)(v6 + 40) + 48LL) )
        {
          v7 = 0;
          if ( *((float *)&v4 + 3) >= -0.9 )
            goto LABEL_11;
LABEL_9:
          if ( !*(_BYTE *)(v6 + 379)
            || !Caver::SceneObject::ComponentWithInterface(
                  *(Caver::SceneObject **)(v6 + 40),
                  (__int64)Caver::PhysicsObjectComponent::Interface) )
          {
LABEL_11:
            while ( 1 )
            {
              Caver::EntityComponent::HandleGroundCollision();
              v21 = v5;
              v22 = v6;
              v23 = v27;
              v24 = v28;
              v26 = v30;
              v25 = *(float *)&v29;
              Caver::SceneObject::HandleMessage(*((Caver::SceneObject **)this + 5), 21, &v21);
              Caver::CollisionShapeComponent::collisionShape(v5);
              Caver::CollisionShapeComponent::collisionShape((Caver::CollisionShapeComponent *)v6);
              Caver::CollisionShape::CollidesWithShape();
              if ( (v8 & 1) == 0 || v7 >= 2 )
                break;
              ++v7;
              if ( *((float *)&v28 + 3) < -0.9 )
                goto LABEL_9;
            }
          }
        }
      }
    }
  }
  return 0;
}

