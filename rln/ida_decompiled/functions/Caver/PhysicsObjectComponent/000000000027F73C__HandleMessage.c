/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000027F73C
 * Mangled: _ZN5Caver22PhysicsObjectComponent13HandleMessageEiPv
 * Demangled: Caver::PhysicsObjectComponent::HandleMessage(int,void *)
 *
 * Callers: 0
 *
 * Callees: 5
 *   0x00000000001F3FD0  Caver::CollisionShapeComponent::collisionShape(void)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FE040  Caver::PhysicsObjectState::HandleGroundCollision(Caver::CollisionMessageData const&)
 *   0x00000000001FE5E0  Caver::SceneObject::HandleMessage(int,void *)
 *   0x00000000001FF2B0  Caver::CollisionShape::CollidesWithShape(Caver::CollisionShape const&,float,Caver::CollisionInfo *)
 *
 * Referenced strings: 33
 *   insn=0x000000000027F758 string=0x000000000027F75C "Y"
 *   insn=0x000000000027F75C string=0x000000000027F760 ")"
 *   insn=0x000000000027F760 string=0x000000000027F764 "("
 *   insn=0x000000000027F774 string=0x000000000027F778 "h"
 *   insn=0x000000000027F778 string=0x000000000027F77C "I"
 *   insn=0x000000000027F778 string=0x000000000027F7C4 "("
 *   insn=0x000000000027F77C string=0x000000000027F784 "(y"
 *   insn=0x000000000027F784 string=0x000000000027F788 ""
 *   insn=0x000000000027F79C string=0x000000000027F7F8 "`"
 *   insn=0x000000000027F7A8 string=0x000000000027F7AC "!"
 *   insn=0x000000000027F7D0 string=0x000000000027F8EC "y"
 *   insn=0x000000000027F7FC string=0x000000000027F800 "`\n"
 *   insn=0x000000000027F804 string=0x000000000027F808 "h"
 *   insn=0x000000000027F80C string=0x000000000027F810 "h2@"
 *   insn=0x000000000027F814 string=0x000000000027F818 "u"
 *   insn=0x000000000027F81C string=0x000000000027F820 "("
 *   insn=0x000000000027F820 string=0x000000000027F824 "v"
 *   insn=0x000000000027F82C string=0x000000000027F830 "("
 *   insn=0x000000000027F830 string=0x000000000027F834 "=I"
 *   insn=0x000000000027F830 string=0x000000000058493C "fff?"
 *   insn=0x000000000027F83C string=0x000000000027F840 "\t"
 *   insn=0x000000000027F858 string=0x000000000027F85C "e"
 *   insn=0x000000000027F868 string=0x000000000027F86C ""
 *   insn=0x000000000027F86C string=0x000000000027F870 "h"
 *   insn=0x000000000027F874 string=0x000000000027F878 "d"
 *   insn=0x000000000027F884 string=0x000000000027F888 "Z"
 *   insn=0x000000000027F888 string=0x000000000027F88C "_"
 *   insn=0x000000000027F898 string=0x00000000001F3FD0 "P'"
 *   insn=0x000000000027F8B4 string=0x000000000027F8B8 "~"
 *   insn=0x000000000027F8B8 string=0x000000000027F8BC "@"
 *   insn=0x000000000027F8D0 string=0x000000000027F8D4 "("
 *   insn=0x000000000027F8E0 string=0x000000000027F8E4 "l"
 *   insn=0x000000000027F8EC string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::PhysicsObjectComponent::HandleMessage(Caver::PhysicsObjectComponent *this, int a2, void *a3)
{
  Caver::SceneObject *v4; // x0
  __int128 v6; // q0
  Caver::CollisionShapeComponent *v7; // x21
  __int64 v8; // x22
  int v9; // w26
  float v10; // s0
  char v11; // w0
  float v12; // [xsp+1Ch] [xbp-64h]

  _ReadStatusReg(TPIDR_EL0);
  switch ( a2 )
  {
    case 7:
      if ( *((_BYTE *)this + 276) && (v4 = *(Caver::SceneObject **)(*((_QWORD *)this + 5) + 48LL)) != 0 )
      {
        Caver::SceneObject::HandleMessage(v4, 9, a3);
      }
      else
      {
        v6 = *((_OWORD *)a3 + 2);
        v12 = *((float *)&v6 + 3);
        v7 = *(Caver::CollisionShapeComponent **)a3;
        if ( *(_BYTE *)(*(_QWORD *)a3 + 379LL) )
        {
          v8 = *((_QWORD *)a3 + 1);
          if ( *(_BYTE *)(v8 + 378) || *((_BYTE *)v7 + 378) && *(_BYTE *)(v8 + 379) && *((float *)&v6 + 3) > 0.9 )
          {
            v9 = 0;
            do
            {
              if ( *((_BYTE *)v7 + 378) )
              {
                v10 = v12;
                if ( *((_BYTE *)this + 220) && v12 < -0.5 )
                  return 0;
              }
              else
              {
                v10 = v12;
              }
              if ( *(_QWORD *)(*(_QWORD *)(v8 + 40) + 48LL) && v10 < 0.9 )
                break;
              Caver::PhysicsObjectState::HandleGroundCollision();
              if ( (unsigned int)++v9 > 2 )
                break;
              Caver::CollisionShapeComponent::collisionShape(v7);
              Caver::CollisionShapeComponent::collisionShape((Caver::CollisionShapeComponent *)v8);
              Caver::CollisionShape::CollidesWithShape();
            }
            while ( (v11 & 1) != 0 );
          }
        }
      }
      break;
    case 16:
      *((_BYTE *)this + 276) = 1;
      break;
    case 17:
    case 19:
      *((_BYTE *)this + 276) = 0;
      break;
    default:
      return 0;
  }
  return 0;
}

