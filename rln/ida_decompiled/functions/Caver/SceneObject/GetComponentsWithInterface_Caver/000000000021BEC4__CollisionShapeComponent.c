/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000021BEC4
 * Mangled: _ZN5Caver11SceneObject26GetComponentsWithInterfaceINS_23CollisionShapeComponentEEEvPSt6vectorIPT_SaIS5_EE
 * Demangled: Caver::SceneObject::GetComponentsWithInterface<Caver::CollisionShapeComponent>(std::vector<Caver::CollisionShapeComponent *,std::allocator<Caver::CollisionShapeComponent *>> *)
 *
 * Callers: 1
 *   0x00000000001FFA80  Caver::SceneObject::GetComponentsWithInterface<Caver::CollisionShapeComponent>(std::vector<Caver::CollisionShapeComponent *,std::allocator<Caver::CollisionShapeComponent *>> *)
 *
 * Callees: 9
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FBBB0  .memmove
 *   0x0000000000201B10  std::vector<Caver::CollisionShapeComponent *,std::allocator<Caver::CollisionShapeComponent *>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::CollisionShapeComponent **,std::vector<Caver::CollisionShapeComponent *,std::allocator<Caver::CollisionShapeComponent *>>>,Caver::CollisionShapeComponent * const&)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000215A90  Caver::CollisionShapeComponent::Interface(void)
 *   0x0000000000565294  sub_565294
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 58
 *   insn=0x000000000021BED8 string=0x000000000021BEDC "V"
 *   insn=0x000000000021BEF4 string=0x000000000021BEF8 "U&"
 *   insn=0x000000000021BF04 string=0x000000000021BF08 "h\n@"
 *   insn=0x000000000021BF04 string=0x000000000021BF14 "h"
 *   insn=0x000000000021BF08 string=0x000000000021BF0C ""
 *   insn=0x000000000021BF0C string=0x000000000021BF10 "h\n"
 *   insn=0x000000000021BF14 string=0x000000000021BF18 "Q@"
 *   insn=0x000000000021BF28 string=0x000000000021BF5C "h\n@"
 *   insn=0x000000000021BF30 string=0x000000000021BF34 "?"
 *   insn=0x000000000021BF38 string=0x000000000021BF3C "3"
 *   insn=0x000000000021BF40 string=0x000000000021BF44 "!"
 *   insn=0x000000000021BF5C string=0x000000000021BF60 ""
 *   insn=0x000000000021BF60 string=0x000000000021BF64 "h\n"
 *   insn=0x000000000021BF68 string=0x000000000021BF6C "h"
 *   insn=0x000000000021BF70 string=0x000000000021BF74 ""
 *   insn=0x000000000021BFB0 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000021BFB4 string=0x000000000021BFB8 "h\n@"
 *   insn=0x000000000021BFBC string=0x000000000021BFC0 ""
 *   insn=0x000000000021BFC0 string=0x000000000021BFC4 "h\n"
 *   insn=0x000000000021BFC8 string=0x000000000021BFCC "h"
 *   insn=0x000000000021BFCC string=0x000000000021BFD0 ""
 *   insn=0x000000000021BFDC string=0x000000000021BFE0 "9"
 *   insn=0x000000000021C000 string=0x000000000021C004 "h"
 *   insn=0x000000000021C014 string=0x000000000021C018 "\t"
 *   insn=0x000000000021C014 string=0x000000000021C050 "y"
 *   insn=0x000000000021C018 string=0x000000000021C01C "\t"
 *   insn=0x000000000021C01C string=0x000000000021C020 "h"
 *   insn=0x000000000021C020 string=0x000000000021C024 "\t!"
 *   insn=0x000000000021C024 string=0x000000000021C028 "i"
 *   insn=0x000000000021C02C string=0x000000000021C030 "\t!"
 *   insn=0x000000000021C030 string=0x000000000021C034 """
 *   insn=0x000000000021C044 string=0x00000000001FBBB0 "0'"
 *   insn=0x000000000021C048 string=0x000000000021C04C "2"
 *   insn=0x000000000021C050 string=0x000000000021C054 ""
 *   insn=0x000000000021C054 string=0x000000000021C058 ""
 *   insn=0x000000000021C058 string=0x000000000021C05C "\t"
 *   insn=0x000000000021C05C string=0x000000000021C060 "("
 *   insn=0x000000000021C060 string=0x000000000021C064 "\n"
 *   insn=0x000000000021C068 string=0x000000000021C06C "_"
 *   insn=0x000000000021C070 string=0x000000000021C074 ")"
 *   insn=0x000000000021C074 string=0x000000000021C078 "?"
 *   insn=0x000000000021C07C string=0x000000000021C080 "8"
 *   insn=0x000000000021C084 string=0x000000000021C088 ""
 *   insn=0x000000000021C088 string=0x000000000021C08C ""
 *   insn=0x000000000021C08C string=0x000000000021C12C "Z$"
 *   insn=0x000000000021C090 string=0x000000000021C094 "Se"
 *   insn=0x000000000021C094 string=0x000000000021C098 "w"
 *   insn=0x000000000021C094 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000021C0B4 string=0x000000000021C0B8 ")"
 *   insn=0x000000000021C0B8 string=0x000000000021C0BC "U"
 *   insn=0x000000000021C0C4 string=0x000000000021C0D4 "h"
 *   insn=0x000000000021C0D8 string=0x000000000021C0DC "5!"
 *   insn=0x000000000021C0E0 string=0x000000000021C0E4 "Y"
 *   insn=0x000000000021C0F8 string=0x000000000021C0FC "w"
 *   insn=0x000000000021C100 string=0x000000000021C104 "kl"
 *   insn=0x000000000021C104 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000021C108 string=0x000000000021C10C "vR"
 *   insn=0x000000000021C10C string=0x000000000021C110 "h\n"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::SceneObject::GetComponentsWithInterface<Caver::CollisionShapeComponent>(__int64 a1, __int64 a2)
{
  _DWORD **v3; // x23
  _DWORD **i; // x24
  _DWORD *v5; // x19
  _QWORD *v6; // x1
  int v7; // w8

  _ReadStatusReg(TPIDR_EL0);
  v3 = *(_DWORD ***)(a1 + 192);
  for ( i = *(_DWORD ***)(a1 + 200); i != v3; ++v3 )
  {
    v5 = *v3;
    if ( *v3 )
      ++v5[2];
    if ( ((*(__int64 (__fastcall **)(_DWORD *, __int64 (__fastcall *(__fastcall *)(Caver::CollisionShapeComponent *))(Caver::CollisionShapeComponent *__hidden)))(*(_QWORD *)v5 + 160LL))(
            v5,
            Caver::CollisionShapeComponent::Interface)
        & 1) != 0 )
    {
      v6 = *(_QWORD **)(a2 + 8);
      if ( v6 == *(_QWORD **)(a2 + 16) )
      {
        std::vector<Caver::CollisionShapeComponent *>::_M_insert_aux();
      }
      else
      {
        *v6 = v5;
        *(_QWORD *)(a2 + 8) += 8LL;
      }
    }
    v7 = v5[2] - 1;
    v5[2] = v7;
    if ( !v7 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v5 + 8LL))(v5);
  }
}

