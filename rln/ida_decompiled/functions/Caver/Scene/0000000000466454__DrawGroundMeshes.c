/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000466454
 * Mangled: _ZN5Caver5Scene16DrawGroundMeshesEPNS_16RenderingContextERKNS_7Matrix4Eb
 * Demangled: Caver::Scene::DrawGroundMeshes(Caver::RenderingContext *,Caver::Matrix4 const&,bool)
 *
 * Callers: 1
 *   0x00000000002000D0  Caver::Scene::DrawGroundMeshes(Caver::RenderingContext *,Caver::Matrix4 const&,bool)
 *
 * Callees: 4
 *   0x00000000001F4FD0  Caver::GroundMeshComponent::Draw(Caver::RenderingContext *,Caver::Rectangle const&,Caver::Matrix4 const&)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FE780  Caver::ComponentManager::ComponentCollectionForInterface(long)
 *   0x000000000021C130  Caver::GroundMeshComponent::Interface(void)
 *
 * Referenced strings: 38
 *   insn=0x0000000000466470 string=0x0000000000466474 "H"
 *   insn=0x0000000000466478 string=0x000000000046647C ""
 *   insn=0x000000000046648C string=0x0000000000466490 "!"
 *   insn=0x0000000000466490 string=0x000000000021C130 "@&"
 *   insn=0x00000000004664A8 string=0x00000000004664AC "_"
 *   insn=0x00000000004664B0 string=0x00000000004664B4 ""
 *   insn=0x00000000004664B0 string=0x00000000004664C4 "("
 *   insn=0x00000000004664B4 string=0x00000000004664D0 "_"
 *   insn=0x00000000004664B8 string=0x00000000004664BC "_"
 *   insn=0x00000000004664C4 string=0x00000000004664C8 ""
 *   insn=0x00000000004664C8 string=0x00000000004664CC "h"
 *   insn=0x00000000004664CC string=0x00000000004664B8 "9#"
 *   insn=0x00000000004664D0 string=0x00000000004664D4 "@"
 *   insn=0x00000000004664EC string=0x00000000004664F0 " "
 *   insn=0x00000000004664F0 string=0x00000000004664F4 "\t"
 *   insn=0x00000000004664F4 string=0x00000000004664F8 "?"
 *   insn=0x00000000004664FC string=0x0000000000466500 ")"
 *   insn=0x0000000000466500 string=0x0000000000466504 "i"
 *   insn=0x0000000000466504 string=0x0000000000466508 ""
 *   insn=0x0000000000466504 string=0x0000000000466570 "9#"
 *   insn=0x0000000000466508 string=0x000000000046650C "}@"
 *   insn=0x0000000000466510 string=0x0000000000466514 "\t"
 *   insn=0x0000000000466510 string=0x000000000046652C "h"
 *   insn=0x0000000000466518 string=0x000000000046651C "\tA@"
 *   insn=0x000000000046651C string=0x0000000000466520 ""
 *   insn=0x0000000000466528 string=0x0000000000466540 ""
 *   insn=0x000000000046654C string=0x0000000000466550 "H"
 *   insn=0x0000000000466568 string=0x00000000001F4FD0 "P'"
 *   insn=0x0000000000466570 string=0x0000000000466574 "?"
 *   insn=0x0000000000466578 string=0x000000000046657C ")"
 *   insn=0x0000000000466578 string=0x0000000000466594 "_"
 *   insn=0x000000000046657C string=0x0000000000466580 ")"
 *   insn=0x0000000000466584 string=0x0000000000466588 "9#"
 *   insn=0x000000000046658C string=0x0000000000466590 "a"
 *   insn=0x000000000046659C string=0x00000000004665A0 ""
 *   insn=0x00000000004665A8 string=0x00000000004665AC "!"
 *   insn=0x00000000004665AC string=0x00000000004665D0 "@?"
 *   insn=0x00000000004665D0 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 *__fastcall Caver::Scene::DrawGroundMeshes(
        Caver::Scene *this,
        Caver::RenderingContext *a2,
        const Caver::Matrix4 *a3,
        int a4)
{
  __int64 *result; // x0
  __int64 v9; // x23
  __int64 **v10; // x25
  __int64 **v11; // x26
  __int64 **v17; // x8
  __int64 v18; // x8
  int v19; // w9
  int *v20; // x8
  __int128 v21; // q0
  __int128 v22; // [xsp+10h] [xbp-80h]
  __int64 v23; // [xsp+28h] [xbp-68h] BYREF
  int v24; // [xsp+30h] [xbp-60h]
  int v25; // [xsp+34h] [xbp-5Ch]
  __int64 v26; // [xsp+38h] [xbp-58h]

  v26 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  result = (__int64 *)Caver::ComponentManager::ComponentCollectionForInterface(
                        (Caver::Scene *)((char *)this + 480),
                        (__int64)Caver::GroundMeshComponent::Interface);
  v9 = (__int64)result;
  v10 = (__int64 **)*result;
  v11 = (__int64 **)result[1];
  if ( v11 != (__int64 **)*result )
  {
    do
    {
      if ( (*v10)[5] )
        break;
      ++v10;
    }
    while ( v11 != v10 );
  }
  if ( v11 != v10 )
  {
    __asm { FMOV            V0.4S, #1.0 }
    v17 = (__int64 **)result[1];
    v22 = _Q0;
    do
    {
      result = *v10;
      if ( (((*((_BYTE *)*v10 + 192) != 0) ^ a4) & 1) == 0 )
      {
        v18 = *(_QWORD *)(result[5] + 248);
        if ( v18 )
        {
          v23 = *(_QWORD *)(v18 + 56);
          v19 = *(_DWORD *)(v18 + 64);
          v20 = (int *)(v18 + 68);
          v24 = v19;
        }
        else
        {
          v23 = *(_QWORD *)((char *)this + 812);
          v24 = *((_DWORD *)this + 205);
          v20 = (int *)((char *)this + 824);
        }
        v21 = v22;
        v25 = *v20;
        if ( *((_BYTE *)this + 1008) )
          v21 = *(_OWORD *)((char *)this + 1012);
        *(_OWORD *)((char *)result + 196) = v21;
        result = (__int64 *)Caver::GroundMeshComponent::Draw(
                              (Caver::GroundMeshComponent *)result,
                              a2,
                              (const Caver::Rectangle *)&v23,
                              a3);
        v17 = *(__int64 ***)(v9 + 8);
      }
      for ( ++v10; v17 != v10; ++v10 )
      {
        if ( (*v10)[5] )
          break;
      }
    }
    while ( v11 != v10 );
  }
  return result;
}

