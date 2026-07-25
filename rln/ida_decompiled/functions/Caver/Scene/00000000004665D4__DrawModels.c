/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004665D4
 * Mangled: _ZN5Caver5Scene10DrawModelsEPNS_16RenderingContextERKNS_7Matrix4Ebb
 * Demangled: Caver::Scene::DrawModels(Caver::RenderingContext *,Caver::Matrix4 const&,bool,bool)
 *
 * Callers: 1
 *   0x00000000001FACC0  Caver::Scene::DrawModels(Caver::RenderingContext *,Caver::Matrix4 const&,bool,bool)
 *
 * Callees: 5
 *   0x00000000001F59D0  Caver::Rectangle::IntersectsWithRect(Caver::Rectangle const&)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F8B30  Caver::ModelComponent::Draw(Caver::RenderingContext *,Caver::Matrix4 const&,bool)
 *   0x00000000001FE780  Caver::ComponentManager::ComponentCollectionForInterface(long)
 *   0x0000000000215678  Caver::ModelComponent::Interface(void)
 *
 * Referenced strings: 43
 *   insn=0x00000000004665F4 string=0x00000000004665F8 "H"
 *   insn=0x00000000004665FC string=0x0000000000466600 ""
 *   insn=0x0000000000466610 string=0x0000000000466614 "!0D"
 *   insn=0x0000000000466624 string=0x0000000000466628 "V`"
 *   insn=0x000000000046662C string=0x0000000000466630 "s@"
 *   insn=0x0000000000466638 string=0x000000000046663C ""
 *   insn=0x0000000000466638 string=0x000000000046664C "h"
 *   insn=0x000000000046664C string=0x0000000000466650 ""
 *   insn=0x0000000000466650 string=0x0000000000466654 "h"
 *   insn=0x0000000000466654 string=0x0000000000466640 "{#"
 *   insn=0x0000000000466668 string=0x000000000046666C "EI"
 *   insn=0x0000000000466668 string=0x0000000000583944 "\n"
 *   insn=0x0000000000466684 string=0x0000000000466688 "y"
 *   insn=0x0000000000466688 string=0x000000000046668C ")sB9?"
 *   insn=0x000000000046668C string=0x0000000000466690 "?"
 *   insn=0x0000000000466694 string=0x0000000000466698 ")"
 *   insn=0x0000000000466698 string=0x000000000046669C "I"
 *   insn=0x000000000046669C string=0x0000000000466744 "{#"
 *   insn=0x00000000004666A0 string=0x00000000004666A4 " "
 *   insn=0x00000000004666A0 string=0x00000000004666B8 "("
 *   insn=0x00000000004666A8 string=0x00000000004666AC "e"
 *   insn=0x00000000004666AC string=0x00000000004666B0 ")"
 *   insn=0x00000000004666B8 string=0x00000000004666BC "\t}@"
 *   insn=0x00000000004666C0 string=0x00000000004666C4 "*"
 *   insn=0x00000000004666C8 string=0x00000000004666CC "*A@"
 *   insn=0x00000000004666CC string=0x00000000004666D0 ")"
 *   insn=0x00000000004666D4 string=0x00000000004666D8 ""
 *   insn=0x00000000004666D8 string=0x00000000004666F4 ")"
 *   insn=0x00000000004666DC string=0x00000000004666E0 ")"
 *   insn=0x0000000000466704 string=0x0000000000466708 ""
 *   insn=0x0000000000466704 string=0x00000000001F59D0 "P'"
 *   insn=0x0000000000466708 string=0x000000000046670C "("
 *   insn=0x0000000000466710 string=0x0000000000466740 "@"
 *   insn=0x0000000000466718 string=0x000000000046671C "h"
 *   insn=0x0000000000466734 string=0x0000000000466738 " /"
 *   insn=0x000000000046673C string=0x00000000001F8B30 "0'"
 *   insn=0x000000000046674C string=0x0000000000466750 "i"
 *   insn=0x0000000000466750 string=0x0000000000466754 ")"
 *   insn=0x0000000000466758 string=0x000000000046675C "{#"
 *   insn=0x0000000000466760 string=0x0000000000466764 "a"
 *   insn=0x0000000000466770 string=0x0000000000466774 ""
 *   insn=0x000000000046677C string=0x0000000000466780 "A"
 *   insn=0x00000000004667A8 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Scene::DrawModels(
        Caver::Scene *this,
        Caver::RenderingContext *a2,
        const Caver::Matrix4 *a3,
        char a4,
        int a5)
{
  __int64 result; // x0
  __int64 v11; // x24
  __int64 *v12; // x27
  __int64 *v13; // x28
  __int64 *v19; // x8
  __int64 v20; // x25
  __int64 v21; // x8
  __int64 v22; // x9
  int v23; // w10
  int *v24; // x9
  __int128 v25; // q0
  __int128 v26; // [xsp+20h] [xbp-90h]
  __int64 v27; // [xsp+38h] [xbp-78h] BYREF
  int v28; // [xsp+40h] [xbp-70h]
  int v29; // [xsp+44h] [xbp-6Ch]
  __int64 v30; // [xsp+48h] [xbp-68h]

  v30 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  result = Caver::ComponentManager::ComponentCollectionForInterface(
             (Caver::Scene *)((char *)this + 480),
             (__int64)Caver::ModelComponent::Interface);
  v11 = result;
  v12 = *(__int64 **)result;
  v13 = *(__int64 **)(result + 8);
  if ( v13 != *(__int64 **)result )
  {
    do
    {
      if ( *(_QWORD *)(*v12 + 40) )
        break;
      ++v12;
    }
    while ( v13 != v12 );
  }
  if ( v13 != v12 )
  {
    __asm { FMOV            V0.4S, #1.0 }
    v19 = *(__int64 **)(result + 8);
    v26 = _Q0;
    do
    {
      v20 = *v12;
      if ( (((*(_BYTE *)(*v12 + 156) != 0) ^ a5) & 1) == 0
        && ((a4 & 1) == 0 || *(float *)(v20 + 152) >= 0.01 || *(_BYTE *)(v20 + 309)) )
      {
        v21 = *(_QWORD *)(v20 + 40);
        v22 = *(_QWORD *)(v21 + 248);
        if ( v22 )
        {
          v27 = *(_QWORD *)(v22 + 56);
          v23 = *(_DWORD *)(v22 + 64);
          v24 = (int *)(v22 + 68);
          v28 = v23;
        }
        else
        {
          v27 = *(_QWORD *)((char *)this + 812);
          v28 = *((_DWORD *)this + 205);
          v24 = (int *)((char *)this + 824);
        }
        v29 = *v24;
        result = Caver::Rectangle::IntersectsWithRect((Caver::Rectangle *)(v21 + 164), (const Caver::Rectangle *)&v27);
        *(_BYTE *)(v20 + 318) = result & 1;
        if ( (result & 1) != 0 )
        {
          v25 = v26;
          if ( *((_BYTE *)this + 1008) )
            v25 = *(_OWORD *)((char *)this + 1012);
          *(_OWORD *)(v20 + 176) = v25;
          result = Caver::ModelComponent::Draw((Caver::ModelComponent *)v20, a2, a3, a4 & 1);
        }
        v19 = *(__int64 **)(v11 + 8);
      }
      for ( ++v12; v19 != v12; ++v12 )
      {
        if ( *(_QWORD *)(*v12 + 40) )
          break;
      }
    }
    while ( v13 != v12 );
  }
  return result;
}

