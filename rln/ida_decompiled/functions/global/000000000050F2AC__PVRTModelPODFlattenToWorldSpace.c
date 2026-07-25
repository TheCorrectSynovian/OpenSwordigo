/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000050F2AC
 * Mangled: _Z31PVRTModelPODFlattenToWorldSpaceR13CPVRTModelPODS0_
 * Demangled: PVRTModelPODFlattenToWorldSpace(CPVRTModelPOD &,CPVRTModelPOD &)
 *
 * Callers: 0
 *
 * Callees: 20
 *   0x00000000001F4050  PVRTModelPODCopyNode(SPODNode const&,SPODNode&,int)
 *   0x00000000001F40F0  PVRTMatrixInverseF(PVRTMATRIXf &,PVRTMATRIXf const&)
 *   0x00000000001F48E0  PVRTModelPODCopyMesh(SPODMesh const&,SPODMesh&)
 *   0x00000000001F5530  TransformCPODData(CPODData &,CPODData &,int,PVRTMATRIXf *,float *,float *,int,bool)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F6770  .calloc
 *   0x00000000001F6C80  CPVRTModelPOD::GetBoneWorldMatrix(PVRTMATRIXf &,SPODNode const&,SPODNode const&)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F72D0  CPVRTModelPOD::Destroy(void)
 *   0x00000000001F79F0  CPVRTModelPOD::InitImpl(void)
 *   0x00000000001F7BD0  PVRTModelPODCopyMaterial(SPODMaterial const&,SPODMaterial&)
 *   0x00000000001F8480  CPVRTModelPOD::GetWorldMatrixNoCache(PVRTMATRIXf &,SPODNode const&)
 *   0x00000000001F89E0  .free
 *   0x00000000001F9340  PVRTVertexRead(PVRTVECTOR4f *,void const*,EPVRTDataType,int)
 *   0x00000000001FA910  PVRTVertexRead(uint *,void const*,EPVRTDataType)
 *   0x00000000001FEAA0  PVRTVertexWrite(void *,EPVRTDataType,int,PVRTVECTOR4f const*)
 *   0x00000000001FF4E0  PVRTMatrixTransposeF(PVRTMATRIXf &,PVRTMATRIXf const&)
 *   0x00000000002008E0  .realloc
 *   0x0000000000201760  .memcpy
 *   0x0000000000203230  .strlen
 *
 * Referenced strings: 402
 *   insn=0x000000000050F2CC string=0x000000000050F2D0 "Y"
 *   insn=0x000000000050F2D0 string=0x000000000050F2D4 "("
 *   insn=0x000000000050F2E8 string=0x000000000050F2EC "sK@"
 *   insn=0x000000000050F2E8 string=0x00000000001F72D0 "0'"
 *   insn=0x000000000050F2F0 string=0x000000000050F2F4 "h"
 *   insn=0x000000000050F2F0 string=0x000000000050F308 "tO@"
 *   insn=0x000000000050F300 string=0x000000000050F304 "@+"
 *   insn=0x000000000050F300 string=0x00000000001F6770 "0'"
 *   insn=0x000000000050F30C string=0x000000000050F310 "+"
 *   insn=0x000000000050F30C string=0x000000000050F324 "SS\t)T;"
 *   insn=0x000000000050F31C string=0x000000000050F320 "@#"
 *   insn=0x000000000050F324 string=0x000000000050F328 "T;"
 *   insn=0x000000000050F328 string=0x000000000050F32C "_{"
 *   insn=0x000000000050F32C string=0x000000000050F330 "h"
 *   insn=0x000000000050F330 string=0x000000000050F334 "H"
 *   insn=0x000000000050F334 string=0x000000000050F338 "h"
 *   insn=0x000000000050F338 string=0x000000000050F33C "H"
 *   insn=0x000000000050F33C string=0x000000000050F340 "h"
 *   insn=0x000000000050F340 string=0x000000000050F344 "H"
 *   insn=0x000000000050F344 string=0x000000000050F348 "h@"
 *   insn=0x000000000050F348 string=0x000000000050F34C "H"
 *   insn=0x000000000050F34C string=0x000000000050F350 "h"
 *   insn=0x000000000050F350 string=0x000000000050F354 "H"
 *   insn=0x000000000050F354 string=0x000000000050F358 "h@"
 *   insn=0x000000000050F358 string=0x000000000050F35C "H"
 *   insn=0x000000000050F35C string=0x000000000050F360 "h"
 *   insn=0x000000000050F360 string=0x000000000050F364 "H"
 *   insn=0x000000000050F364 string=0x000000000050F368 "hO@"
 *   insn=0x000000000050F368 string=0x000000000050F36C "X"
 *   insn=0x000000000050F36C string=0x000000000050FE6C "iK@"
 *   insn=0x000000000050F370 string=0x000000000050F374 "("
 *   insn=0x000000000050F380 string=0x000000000050F384 ""
 *   insn=0x000000000050F394 string=0x000000000050F398 "i+@"
 *   insn=0x000000000050F3A0 string=0x000000000050F3A4 ""
 *   insn=0x000000000050F3A4 string=0x000000000050F3A8 " "
 *   insn=0x000000000050F3A8 string=0x000000000050F3AC "w#@"
 *   insn=0x000000000050F3B4 string=0x000000000050F3B8 "\t_"
 *   insn=0x000000000050F3BC string=0x000000000050F3C0 ")u@"
 *   insn=0x000000000050F3C4 string=0x000000000050F3C8 "Y+@"
 *   insn=0x000000000050F3C8 string=0x000000000050F3CC "b{@"
 *   insn=0x000000000050F3CC string=0x000000000050F3D0 "V#@"
 *   insn=0x000000000050F3D4 string=0x000000000050F3D8 "3"
 *   insn=0x000000000050F3E0 string=0x00000000001F4050 "P'"
 *   insn=0x000000000050F3F0 string=0x000000000050F3F4 "`"
 *   insn=0x000000000050F3F4 string=0x000000000050F3F8 "z"
 *   insn=0x000000000050F3F8 string=0x00000000001F89E0 "0'"
 *   insn=0x000000000050F408 string=0x000000000050F40C "`"
 *   insn=0x000000000050F40C string=0x000000000050F410 "t"
 *   insn=0x000000000050F41C string=0x000000000050F420 "@"
 *   insn=0x000000000050F420 string=0x000000000050F424 "+"
 *   insn=0x000000000050F428 string=0x000000000050F42C "`"
 *   insn=0x000000000050F42C string=0x000000000050F430 "l"
 *   insn=0x000000000050F430 string=0x000000000050F434 "_"
 *   insn=0x000000000050F43C string=0x000000000050F440 " "
 *   insn=0x000000000050F440 string=0x000000000050F444 "`"
 *   insn=0x000000000050F444 string=0x000000000050F448 "f"
 *   insn=0x000000000050F448 string=0x000000000050F44C "?"
 *   insn=0x000000000050F454 string=0x000000000050F458 "|"
 *   insn=0x000000000050F458 string=0x000000000050F45C "!"
 *   insn=0x000000000050F45C string=0x00000000001F48E0 "P'"
 *   insn=0x000000000050F464 string=0x000000000050F468 "`"
 *   insn=0x000000000050F468 string=0x000000000050F46C "@"
 *   insn=0x000000000050F470 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000050F47C string=0x000000000050F480 "`"
 *   insn=0x000000000050F480 string=0x000000000050F484 "@"
 *   insn=0x000000000050F49C string=0x000000000050F4A0 "@"
 *   insn=0x000000000050F4B0 string=0x000000000050F4B4 "`"
 *   insn=0x000000000050F4B8 string=0x000000000050F4BC "h"
 *   insn=0x000000000050F4C4 string=0x000000000050F4C8 "F"
 *   insn=0x000000000050F4D4 string=0x000000000050F4D8 "`"
 *   insn=0x000000000050F4D8 string=0x000000000050F4DC "h"
 *   insn=0x000000000050F4E4 string=0x000000000050F4E8 ">"
 *   insn=0x000000000050F4F4 string=0x000000000050F4F8 "("
 *   insn=0x000000000050F4FC string=0x000000000050F534 "\t_"
 *   insn=0x000000000050F50C string=0x000000000050F510 "h:"
 *   insn=0x000000000050F510 string=0x000000000050F514 "h>@"
 *   insn=0x000000000050F514 string=0x000000000050F518 ")"
 *   insn=0x000000000050F518 string=0x000000000050F51C "`&@"
 *   insn=0x000000000050F51C string=0x000000000050F520 "}\t"
 *   insn=0x000000000050F528 string=0x000000000050F52C "`&"
 *   insn=0x000000000050F534 string=0x000000000050F538 "(ME"
 *   insn=0x000000000050F540 string=0x000000000050F578 "\t_"
 *   insn=0x000000000050F550 string=0x000000000050F554 "hR"
 *   insn=0x000000000050F554 string=0x000000000050F558 "hV@"
 *   insn=0x000000000050F558 string=0x000000000050F55C ")"
 *   insn=0x000000000050F55C string=0x000000000050F560 "`2@"
 *   insn=0x000000000050F560 string=0x000000000050F564 "}\t"
 *   insn=0x000000000050F56C string=0x000000000050F570 "`2"
 *   insn=0x000000000050F578 string=0x000000000050F57C "("
 *   insn=0x000000000050F584 string=0x000000000050F5BC "\n_"
 *   insn=0x000000000050F594 string=0x000000000050F598 "hj"
 *   insn=0x000000000050F598 string=0x000000000050F59C "hn@"
 *   insn=0x000000000050F59C string=0x000000000050F5A0 ")"
 *   insn=0x000000000050F5A0 string=0x000000000050F5A4 "`>@"
 *   insn=0x000000000050F5A4 string=0x000000000050F5A8 "}\t"
 *   insn=0x000000000050F5B0 string=0x000000000050F5B4 "`>"
 *   insn=0x000000000050F5BC string=0x000000000050F5C0 ")"
 *   insn=0x000000000050F5C0 string=0x000000000050F5C4 "HMH"
 *   insn=0x000000000050F5D0 string=0x000000000050F5D4 ")"
 *   insn=0x000000000050F5DC string=0x000000000050F5E0 ")"
 *   insn=0x000000000050F5E4 string=0x000000000050F5E8 "I"
 *   insn=0x000000000050F600 string=0x000000000050F604 "h"
 *   insn=0x000000000050F604 string=0x000000000050F608 "h"
 *   insn=0x000000000050F608 string=0x000000000050F60C ")"
 *   insn=0x000000000050F60C string=0x000000000050F610 "`J@"
 *   insn=0x000000000050F610 string=0x000000000050F614 "}\t"
 *   insn=0x000000000050F61C string=0x000000000050F620 "`J"
 *   insn=0x000000000050F628 string=0x000000000050F62C "h"
 *   insn=0x000000000050F630 string=0x000000000050F634 ""
 *   insn=0x000000000050F634 string=0x000000000050F638 "\t_"
 *   insn=0x000000000050F634 string=0x000000000050F674 "hC@"
 *   insn=0x000000000050F638 string=0x000000000050F63C "(\t"
 *   insn=0x000000000050F63C string=0x000000000050F640 "4!"
 *   insn=0x000000000050F640 string=0x000000000050F644 "h"
 *   insn=0x000000000050F64C string=0x000000000050F650 "H"
 *   insn=0x000000000050F658 string=0x000000000050F65C "("
 *   insn=0x000000000050F664 string=0x000000000050F668 "B"
 *   insn=0x000000000050F674 string=0x000000000050F678 "i+@"
 *   insn=0x000000000050F684 string=0x000000000050F688 "jU"
 *   insn=0x000000000050F688 string=0x000000000050F68C "I"
 *   insn=0x000000000050F68C string=0x000000000050F690 ")"
 *   insn=0x000000000050F690 string=0x000000000050F694 "  "
 *   insn=0x000000000050F694 string=0x000000000050F698 ")}\n"
 *   insn=0x000000000050F69C string=0x000000000050F6A0 ""
 *   insn=0x000000000050F69C string=0x000000000050FC14 "\n\t@"
 *   insn=0x000000000050F6A0 string=0x000000000050F6A4 ")}@"
 *   insn=0x000000000050F6A4 string=0x000000000050F6A8 ""
 *   insn=0x000000000050F6A8 string=0x000000000050F6AC "a"
 *   insn=0x000000000050F6D4 string=0x000000000050F6D8 "h2"
 *   insn=0x000000000050F6E4 string=0x000000000050F6E8 """
 *   insn=0x000000000050F6F8 string=0x000000000050F6FC ""
 *   insn=0x000000000050F6FC string=0x000000000050F700 "'"
 *   insn=0x000000000050F700 string=0x000000000050F704 "\n+"
 *   insn=0x000000000050F708 string=0x000000000050F70C "\t_\n"
 *   insn=0x000000000050F710 string=0x000000000050F714 "+"
 *   insn=0x000000000050F718 string=0x000000000050F71C "+"
 *   insn=0x000000000050F720 string=0x000000000050F724 "+"
 *   insn=0x000000000050F728 string=0x000000000050F72C "+"
 *   insn=0x000000000050F730 string=0x000000000050F734 "+"
 *   insn=0x000000000050F738 string=0x000000000050F73C "+A"
 *   insn=0x000000000050F740 string=0x000000000050F744 "+!"
 *   insn=0x000000000050F748 string=0x000000000050F74C "+"
 *   insn=0x000000000050F750 string=0x000000000050F754 "+"
 *   insn=0x000000000050F758 string=0x000000000050F75C "+"
 *   insn=0x000000000050F760 string=0x000000000050F764 "+A"
 *   insn=0x000000000050F768 string=0x000000000050F76C "+a"
 *   insn=0x000000000050F774 string=0x000000000050F778 "+Q"
 *   insn=0x000000000050F77C string=0x000000000050F780 "K"
 *   insn=0x000000000050F784 string=0x000000000050F788 "KA"
 *   insn=0x000000000050F790 string=0x000000000050F794 ";"
 *   insn=0x000000000050F794 string=0x000000000050F798 "4a"
 *   insn=0x000000000050F798 string=0x000000000050F79C "5"
 *   insn=0x000000000050F7A0 string=0x000000000050F7A4 "K"
 *   insn=0x000000000050F7A4 string=0x000000000050F7A8 "J"
 *   insn=0x000000000050F7A8 string=0x000000000050F7AC "6"
 *   insn=0x000000000050F7B8 string=0x000000000050F7BC ")"
 *   insn=0x000000000050F7BC string=0x000000000050F7C0 ")yl"
 *   insn=0x000000000050F7E8 string=0x000000000050F7EC ""
 *   insn=0x000000000050F7EC string=0x000000000050F7F0 ")"
 *   insn=0x000000000050F7F0 string=0x000000000050F7F4 "\n(@"
 *   insn=0x000000000050F7F8 string=0x000000000050F7FC "(Y"
 *   insn=0x000000000050F808 string=0x00000000001F6C80 "0'"
 *   insn=0x000000000050F80C string=0x000000000050F810 ""
 *   insn=0x000000000050F818 string=0x000000000050F81C ""
 *   insn=0x000000000050F824 string=0x000000000050F828 ""
 *   insn=0x000000000050F828 string=0x000000000050F82C "h"
 *   insn=0x000000000050F864 string=0x000000000050F868 """
 *   insn=0x000000000050F868 string=0x00000000001F40F0 "P'"
 *   insn=0x000000000050F870 string=0x000000000050F874 ""
 *   insn=0x000000000050F878 string=0x000000000050F87C "s"
 *   insn=0x000000000050F88C string=0x000000000050F890 "a"
 *   insn=0x000000000050F89C string=0x000000000050F8A0 ""
 *   insn=0x000000000050F8B0 string=0x000000000050F8B4 ")"
 *   insn=0x000000000050F8B4 string=0x000000000050F8B8 "J"
 *   insn=0x000000000050F8B8 string=0x000000000050F8BC "(\t"
 *   insn=0x000000000050F8C0 string=0x000000000050F8C4 ")yl"
 *   insn=0x000000000050F8C4 string=0x000000000050F8C8 "1"
 *   insn=0x000000000050F8C8 string=0x000000000050F8CC ""
 *   insn=0x000000000050F8CC string=0x000000000050F8D0 "\n"
 *   insn=0x000000000050F8D0 string=0x000000000050F8D4 ""
 *   insn=0x000000000050F8D0 string=0x000000000050FA70 "9"
 *   insn=0x000000000050F8E4 string=0x000000000050F8E8 "\tYx"
 *   insn=0x000000000050F8E8 string=0x000000000050F8EC "3"
 *   insn=0x000000000050F8F0 string=0x000000000050F8F4 "j"
 *   insn=0x000000000050F8F4 string=0x000000000050F8F8 "?"
 *   insn=0x000000000050F8FC string=0x000000000050F900 "U"
 *   insn=0x000000000050F8FC string=0x000000000050F918 "h"
 *   insn=0x000000000050F900 string=0x000000000050FA54 "7"
 *   insn=0x000000000050F908 string=0x000000000050F90C "IKh8i\t"
 *   insn=0x000000000050F90C string=0x000000000050F910 "i\t"
 *   insn=0x000000000050F910 string=0x000000000050F914 ""
 *   insn=0x000000000050F918 string=0x000000000050F91C "H"
 *   insn=0x000000000050F928 string=0x000000000050F92C "B"
 *   insn=0x000000000050F92C string=0x000000000050F930 ")}"
 *   insn=0x000000000050F938 string=0x00000000001FA910 "0'"
 *   insn=0x000000000050F93C string=0x000000000050F940 "IKh8"
 *   insn=0x000000000050F954 string=0x000000000050F958 "J"
 *   insn=0x000000000050F958 string=0x000000000050F95C ")"
 *   insn=0x000000000050F95C string=0x000000000050F960 "b"
 *   insn=0x000000000050F960 string=0x000000000050F964 "H}!"
 *   insn=0x000000000050F964 string=0x000000000050F968 "!"
 *   insn=0x000000000050F968 string=0x000000000050F96C "u"
 *   insn=0x000000000050F96C string=0x00000000001F9340 "0'"
 *   insn=0x000000000050F97C string=0x000000000050F980 "b"
 *   insn=0x000000000050F984 string=0x000000000050F988 "J"
 *   insn=0x000000000050F988 string=0x000000000050F98C ""
 *   insn=0x000000000050F98C string=0x000000000050F990 "c"
 *   insn=0x000000000050F990 string=0x000000000050F994 "I}\t"
 *   insn=0x000000000050F998 string=0x000000000050F99C "i"
 *   insn=0x000000000050F9C0 string=0x00000000001F5530 "P'"
 *   insn=0x000000000050FA34 string=0x000000000050FA38 "Ik(8"
 *   insn=0x000000000050FA3C string=0x000000000050FA40 "9"
 *   insn=0x000000000050FA40 string=0x000000000050FA44 "\tyx"
 *   insn=0x000000000050FA44 string=0x000000000050FA48 "j"
 *   insn=0x000000000050FA48 string=0x000000000050FA4C "?"
 *   insn=0x000000000050FA4C string=0x000000000050FA50 "C"
 *   insn=0x000000000050FA68 string=0x000000000050FA6C "X"
 *   insn=0x000000000050FA74 string=0x000000000050FA78 "?"
 *   insn=0x000000000050FA84 string=0x000000000050FA9C "h"
 *   insn=0x000000000050FA8C string=0x000000000050FA90 "IKh8i\t"
 *   insn=0x000000000050FA90 string=0x000000000050FA94 "i\t"
 *   insn=0x000000000050FA94 string=0x000000000050FA98 ""
 *   insn=0x000000000050FA9C string=0x000000000050FAA0 "H"
 *   insn=0x000000000050FAAC string=0x000000000050FAB0 "B"
 *   insn=0x000000000050FAB0 string=0x000000000050FAB4 ")}"
 *   insn=0x000000000050FAC0 string=0x000000000050FAC4 "IKh8"
 *   insn=0x000000000050FAD8 string=0x000000000050FADC "J"
 *   insn=0x000000000050FADC string=0x000000000050FAE0 ")"
 *   insn=0x000000000050FAE0 string=0x000000000050FAE4 "b"
 *   insn=0x000000000050FAE4 string=0x000000000050FAE8 "H}!"
 *   insn=0x000000000050FAE8 string=0x000000000050FAEC "!"
 *   insn=0x000000000050FB00 string=0x000000000050FB04 "b"
 *   insn=0x000000000050FB08 string=0x000000000050FB0C "J"
 *   insn=0x000000000050FB0C string=0x000000000050FB10 ""
 *   insn=0x000000000050FB10 string=0x000000000050FB14 "c"
 *   insn=0x000000000050FB14 string=0x000000000050FB18 "I}\t"
 *   insn=0x000000000050FB1C string=0x000000000050FB20 ""
 *   insn=0x000000000050FB40 string=0x000000000050FB44 "{"
 *   insn=0x000000000050FB64 string=0x000000000050FB68 "r"
 *   insn=0x000000000050FB88 string=0x000000000050FB8C "i"
 *   insn=0x000000000050FBAC string=0x000000000050FBB0 "`"
 *   insn=0x000000000050FBB8 string=0x000000000050FBBC "Ik(8"
 *   insn=0x000000000050FBCC string=0x000000000050FBD0 ""
 *   insn=0x000000000050FBD4 string=0x000000000050FBD8 "?"
 *   insn=0x000000000050FBE0 string=0x000000000050FBE4 "h"
 *   insn=0x000000000050FBE8 string=0x000000000050FBEC "}"
 *   insn=0x000000000050FBF4 string=0x000000000050FBF8 "|"
 *   insn=0x000000000050FBF8 string=0x000000000050FC04 "z"
 *   insn=0x000000000050FBFC string=0x000000000050FC00 "x"
 *   insn=0x000000000050FC08 string=0x000000000050FC0C "u"
 *   insn=0x000000000050FC0C string=0x000000000050FC10 "x"
 *   insn=0x000000000050FC14 string=0x000000000050FC18 "3}@"
 *   insn=0x000000000050FC18 string=0x000000000050FC1C "AYi"
 *   insn=0x000000000050FC20 string=0x000000000050FC24 "A"
 *   insn=0x000000000050FC24 string=0x000000000050FC28 "@"
 *   insn=0x000000000050FC28 string=0x000000000050FC2C ""
 *   insn=0x000000000050FC50 string=0x000000000050FC54 ""
 *   insn=0x000000000050FC5C string=0x000000000050FC60 ""
 *   insn=0x000000000050FC68 string=0x000000000050FC6C ""
 *   insn=0x000000000050FCAC string=0x000000000050FCB0 ""
 *   insn=0x000000000050FCB4 string=0x000000000050FCB8 "\t+"
 *   insn=0x000000000050FCBC string=0x000000000050FCC0 "\t_\t"
 *   insn=0x000000000050FCD0 string=0x000000000050FCD4 "7!"
 *   insn=0x000000000050FCD4 string=0x000000000050FCD8 "8"
 *   insn=0x000000000050FCD8 string=0x000000000050FCDC "!"
 *   insn=0x000000000050FCE4 string=0x000000000050FCE8 "#"
 *   insn=0x000000000050FCF0 string=0x000000000050FCF4 ""
 *   insn=0x000000000050FCFC string=0x000000000050FD00 "B"
 *   insn=0x000000000050FD00 string=0x000000000050FD04 "}"
 *   insn=0x000000000050FD04 string=0x000000000050FD08 "!"
 *   insn=0x000000000050FD44 string=0x000000000050FD48 "I"
 *   insn=0x000000000050FD48 string=0x000000000050FD4C "h"
 *   insn=0x000000000050FD50 string=0x000000000050FD54 """
 *   insn=0x000000000050FD54 string=0x000000000050FD58 ")}"
 *   insn=0x000000000050FD60 string=0x000000000050FD64 "O"
 *   insn=0x000000000050FDD4 string=0x000000000050FDD8 "s"
 *   insn=0x000000000050FDD8 string=0x000000000050FDDC ""
 *   insn=0x000000000050FDE0 string=0x000000000050FDE4 "#"
 *   insn=0x000000000050FDF0 string=0x000000000050FDF4 "hO@"
 *   insn=0x000000000050FE14 string=0x000000000050FE18 "hC@"
 *   insn=0x000000000050FE14 string=0x00000000001F8480 "0'"
 *   insn=0x000000000050FE18 string=0x000000000050FE1C "\t"
 *   insn=0x000000000050FE1C string=0x000000000050FE20 "\n\t@"
 *   insn=0x000000000050FE20 string=0x000000000050FE24 "Iy3"
 *   insn=0x000000000050FE24 string=0x000000000050FE28 "@"
 *   insn=0x000000000050FE2C string=0x000000000050FE30 ""
 *   insn=0x000000000050FE64 string=0x00000000005102DC "("
 *   insn=0x000000000050FE74 string=0x0000000000510090 "t@"
 *   insn=0x000000000050FE78 string=0x000000000050FE7C "hF("
 *   insn=0x000000000050FE7C string=0x000000000050FE80 "t"
 *   insn=0x000000000050FE8C string=0x000000000050FEE4 "h+@"
 *   insn=0x000000000050FE9C string=0x000000000050FEA0 "x"
 *   insn=0x000000000050FEA0 string=0x000000000050FEA4 "hC@"
 *   insn=0x000000000050FEA4 string=0x000000000050FEA8 "\t"
 *   insn=0x000000000050FEA8 string=0x000000000050FEAC "\n\t@"
 *   insn=0x000000000050FEAC string=0x000000000050FEB0 "Iy3"
 *   insn=0x000000000050FEB0 string=0x000000000050FEB4 "@"
 *   insn=0x000000000050FEB8 string=0x000000000050FEBC ""
 *   insn=0x000000000050FED8 string=0x000000000050FEDC "V+@"
 *   insn=0x000000000050FEDC string=0x000000000050FEE0 "U"
 *   insn=0x000000000050FEE4 string=0x000000000050FEE8 "I+@"
 *   insn=0x000000000050FEE8 string=0x000000000050FEEC "b{@"
 *   insn=0x000000000050FEF0 string=0x000000000050FEF4 "!"
 *   insn=0x000000000050FEF4 string=0x000000000050FEF8 "V"
 *   insn=0x000000000050FEF8 string=0x000000000050FEFC "V+@"
 *   insn=0x000000000050FF04 string=0x000000000050FF08 "A"
 *   insn=0x000000000050FF10 string=0x000000000050FF14 "V+@"
 *   insn=0x000000000050FF2C string=0x000000000050FF30 "V+@"
 *   insn=0x000000000050FF48 string=0x000000000050FF4C "V+@"
 *   insn=0x000000000050FF64 string=0x000000000050FF68 "V+@"
 *   insn=0x000000000050FF80 string=0x000000000050FF84 "V+@"
 *   insn=0x000000000050FF9C string=0x000000000050FFA0 "V+@"
 *   insn=0x000000000050FFB8 string=0x000000000050FFBC "V+@"
 *   insn=0x000000000050FFD0 string=0x000000000050FFE4 "hC@"
 *   insn=0x000000000050FFD4 string=0x000000000050FFD8 "V+@"
 *   insn=0x000000000050FFE8 string=0x000000000050FFEC "  "
 *   insn=0x000000000050FFEC string=0x000000000050FFF0 "a"
 *   insn=0x000000000050FFF0 string=0x000000000050FFF4 ""
 *   insn=0x000000000050FFF0 string=0x000000000050FFFC "\t\t@"
 *   insn=0x000000000050FFF8 string=0x0000000000510010 ""
 *   insn=0x000000000050FFFC string=0x0000000000510000 "!ys"
 *   insn=0x0000000000510004 string=0x0000000000510008 "A"
 *   insn=0x0000000000510008 string=0x000000000051000C "@"
 *   insn=0x0000000000510008 string=0x000000000050FE90 "h+@"
 *   insn=0x0000000000510048 string=0x000000000051004C "H+@"
 *   insn=0x0000000000510048 string=0x0000000000510078 "hK@"
 *   insn=0x0000000000510050 string=0x0000000000510054 ""
 *   insn=0x0000000000510054 string=0x0000000000510058 "-@"
 *   insn=0x0000000000510078 string=0x000000000051007C "s"
 *   insn=0x0000000000510090 string=0x0000000000510094 "t"
 *   insn=0x0000000000510094 string=0x0000000000510140 "s+@"
 *   insn=0x00000000005100A8 string=0x00000000005100AC "S"
 *   insn=0x00000000005100B0 string=0x00000000005100B4 "T"
 *   insn=0x00000000005100B4 string=0x00000000005100B8 "h@"
 *   insn=0x00000000005100B8 string=0x00000000005100BC "("
 *   insn=0x00000000005100C8 string=0x00000000005100D8 "w"
 *   insn=0x00000000005100D8 string=0x00000000005100DC "j"
 *   insn=0x00000000005100DC string=0x00000000005100E0 "h{"
 *   insn=0x00000000005100E4 string=0x00000000005100E8 " "
 *   insn=0x00000000005100E8 string=0x00000000005100EC "_\t"
 *   insn=0x00000000005100EC string=0x00000000005100F0 "@"
 *   insn=0x00000000005100F0 string=0x00000000005100F4 "!\t@"
 *   insn=0x00000000005100F8 string=0x0000000000510134 "h@"
 *   insn=0x00000000005100FC string=0x0000000000510100 "H"
 *   insn=0x000000000051010C string=0x0000000000510110 "h"
 *   insn=0x000000000051013C string=0x00000000005100CC "S"
 *   insn=0x0000000000510140 string=0x0000000000510144 "S"
 *   insn=0x0000000000510144 string=0x0000000000510148 "h\n"
 *   insn=0x0000000000510144 string=0x00000000005101CC "v[@"
 *   insn=0x0000000000510154 string=0x0000000000510158 "@"
 *   insn=0x000000000051015C string=0x0000000000510160 "S+"
 *   insn=0x0000000000510160 string=0x0000000000510164 "h@"
 *   insn=0x0000000000510168 string=0x000000000051016C "\t"
 *   insn=0x000000000051016C string=0x0000000000510170 "\t"
 *   insn=0x0000000000510180 string=0x0000000000510184 "C"
 *   insn=0x0000000000510188 string=0x000000000051018C "\t"
 *   insn=0x000000000051018C string=0x0000000000510190 "j@"
 *   insn=0x0000000000510190 string=0x0000000000510194 "K@"
 *   insn=0x0000000000510194 string=0x0000000000510198 ""
 *   insn=0x0000000000510198 string=0x000000000051019C "J"
 *   insn=0x000000000051019C string=0x00000000005101A0 "L"
 *   insn=0x00000000005101A0 string=0x00000000005101A4 "k"
 *   insn=0x00000000005101A4 string=0x00000000005101A8 ")"
 *   insn=0x00000000005101A8 string=0x00000000005101AC "l"
 *   insn=0x00000000005101AC string=0x00000000005101B0 "@"
 *   insn=0x00000000005101B0 string=0x00000000005101B4 "`"
 *   insn=0x00000000005101B4 string=0x00000000005101B8 "@"
 *   insn=0x00000000005101B8 string=0x00000000005101BC "`"
 *   insn=0x00000000005101BC string=0x00000000005101C0 "J+@"
 *   insn=0x00000000005101C4 string=0x00000000005101C8 "C"
 *   insn=0x00000000005101CC string=0x00000000005101D0 "V"
 *   insn=0x00000000005101D0 string=0x0000000000510258 "sk@"
 *   insn=0x00000000005101D8 string=0x00000000005101DC "e"
 *   insn=0x00000000005101DC string=0x00000000005101E0 "@3"
 *   insn=0x00000000005101E8 string=0x00000000005101EC "V["
 *   insn=0x00000000005101EC string=0x00000000005101F0 "w3@"
 *   insn=0x00000000005101F8 string=0x00000000005101FC "X3@"
 *   insn=0x0000000000510200 string=0x0000000000510204 ""
 *   insn=0x0000000000510210 string=0x0000000000510214 "W"
 *   insn=0x000000000051021C string=0x0000000000510220 "t"
 *   insn=0x0000000000510240 string=0x0000000000510244 "G"
 *   insn=0x0000000000510244 string=0x0000000000510248 "V[@"
 *   insn=0x000000000051025C string=0x0000000000510260 ""
 *   insn=0x0000000000510260 string=0x0000000000510264 "`~"
 *   insn=0x0000000000510268 string=0x000000000051026C "A"
 *   insn=0x0000000000510270 string=0x0000000000510274 "H;"
 *   insn=0x0000000000510278 string=0x000000000051027C "Sk"
 *   insn=0x000000000051027C string=0x0000000000510280 "ik@"
 *   insn=0x0000000000510280 string=0x0000000000510284 "i"
 *   insn=0x0000000000510284 string=0x0000000000510288 "`;@"
 *   insn=0x000000000051028C string=0x0000000000510290 "P"
 *   insn=0x0000000000510290 string=0x0000000000510294 "hk@"
 *   insn=0x0000000000510290 string=0x00000000001F7BD0 "0'"
 *   insn=0x00000000005102A4 string=0x00000000005102A8 "h;@"
 *   insn=0x00000000005102A8 string=0x00000000005102AC "I;@"
 *   insn=0x00000000005102B0 string=0x00000000005102B4 "!"
 *   insn=0x00000000005102B4 string=0x00000000005102B8 "F"
 *   insn=0x00000000005102B8 string=0x00000000005102BC "hk@"
 *   insn=0x00000000005102BC string=0x00000000005102C0 "s"
 *   insn=0x00000000005102D4 string=0x00000000001F79F0 "0'"
 *   insn=0x00000000005102E4 string=0x00000000005102E8 "A"
 *   insn=0x0000000000510310 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall PVRTModelPODFlattenToWorldSpace(CPVRTModelPOD *a1, CPVRTModelPOD *this)
{
  CPVRTModelPOD *v2; // x26
  __int64 v4; // x19
  __int64 v5; // x20
  unsigned int v6; // w8
  unsigned int v7; // w28
  __int64 v8; // x8
  __int64 v9; // x23
  __int64 v10; // x24
  __int64 v11; // x25
  __int64 v12; // x22
  unsigned int *v13; // x19
  __int64 v14; // x20
  void *v15; // x0
  _QWORD *v16; // x20
  void *v17; // t1
  __int64 v18; // x20
  void *v19; // x0
  _QWORD *v20; // x20
  void *v21; // t1
  __int64 v22; // x26
  void *v23; // x0
  _QWORD *v24; // x26
  void *v25; // t1
  __int64 v26; // x25
  void *v27; // x0
  _QWORD *v28; // x25
  void *v29; // t1
  __int64 v30; // x19
  void *v31; // x0
  _QWORD *v32; // x19
  void *v33; // t1
  __int64 v34; // x19
  void *v35; // x0
  _QWORD *v36; // x19
  void *v37; // t1
  __int64 v38; // x8
  void *v39; // x0
  _QWORD *v40; // x19
  __int64 v41; // x19
  void *v42; // x0
  __int64 v43; // x19
  void *v44; // t1
  __int64 v45; // x19
  void *v46; // x0
  _QWORD *v47; // x19
  void *v48; // t1
  __int64 v49; // x25
  _DWORD *v50; // x25
  int v51; // t1
  __int64 v52; // x19
  __int64 v53; // x19
  __int64 v54; // x19
  __int64 v55; // x19
  __int64 v56; // x19
  __int64 v57; // x9
  __int64 v58; // x8
  int *v59; // x20
  _OWORD *v60; // x0
  __int64 v61; // x8
  _OWORD *v62; // x25
  char *v63; // x28
  __int64 v64; // x8
  __int128 *v65; // x8
  size_t v66; // x0
  _BYTE *v67; // x26
  unsigned __int64 v68; // x8
  __int64 v69; // x9
  unsigned int v70; // w24
  unsigned __int64 v71; // x12
  unsigned int v72; // w25
  _QWORD *v73; // x27
  __int64 *v74; // x22
  _OWORD *v75; // x24
  __int64 v76; // x19
  char *v77; // x23
  unsigned __int64 v78; // x20
  __int128 v79; // q0
  bool v80; // cf
  int *v81; // x8
  int v82; // w9
  int v83; // w8
  __int64 v84; // x8
  unsigned int v85; // w23
  int v86; // w9
  unsigned int v87; // w19
  unsigned int v88; // w10
  int v89; // w19
  unsigned int v90; // w23
  __int64 v91; // x19
  unsigned int v92; // w19
  __int64 v93; // x8
  _OWORD *v94; // x8
  unsigned __int64 v96; // x19
  unsigned __int64 v97; // x20
  __int64 v98; // x21
  __int64 v99; // x8
  _OWORD *v100; // x8
  __int64 v101; // x22
  void *v102; // x0
  void *v103; // x0
  void *v104; // x0
  void *v105; // x0
  void *v106; // x0
  void *v107; // x0
  void *v108; // x0
  void *v109; // x0
  __int64 v110; // x8
  __int64 v111; // x8
  __int128 *v112; // x8
  void *v113; // x0
  _OWORD *v114; // x8
  __int64 v115; // x20
  char *v116; // x19
  __int64 v117; // x21
  unsigned __int64 i; // x22
  __int64 v119; // x23
  char *v120; // x10
  __int64 v121; // x8
  __int128 v122; // q0
  const void *v123; // x1
  size_t v124; // x20
  void *v125; // x0
  __int64 v126; // x19
  _QWORD *v127; // x0
  __int64 v128; // x8
  unsigned __int64 v129; // x8
  __int64 v130; // x9
  __int64 v131; // x10
  __int64 v132; // x11
  __int64 v133; // x22
  void *v134; // x0
  unsigned __int64 v135; // x21
  __int64 v136; // x23
  const char *v137; // x19
  __int64 v138; // x24
  size_t v139; // x0
  void *v140; // x20
  size_t v141; // x0
  __int64 v142; // x19
  void *v143; // x8
  unsigned __int64 v144; // x19
  __int64 v145; // x20
  void *p; // [xsp+18h] [xbp-228h]
  CPVRTModelPOD *v147; // [xsp+20h] [xbp-220h]
  unsigned int v148; // [xsp+2Ch] [xbp-214h]
  int *v149; // [xsp+38h] [xbp-208h]
  _DWORD *v150; // [xsp+40h] [xbp-200h]
  _QWORD *v151; // [xsp+48h] [xbp-1F8h]
  _QWORD *v152; // [xsp+50h] [xbp-1F0h]
  _DWORD *v153; // [xsp+58h] [xbp-1E8h]
  unsigned int v154; // [xsp+60h] [xbp-1E0h]
  unsigned __int64 v155; // [xsp+60h] [xbp-1E0h]
  _DWORD *v156; // [xsp+68h] [xbp-1D8h]
  _DWORD *v157; // [xsp+70h] [xbp-1D0h]
  CPVRTModelPOD *v158; // [xsp+88h] [xbp-1B8h]
  __int64 v159; // [xsp+90h] [xbp-1B0h]
  _DWORD *v160; // [xsp+98h] [xbp-1A8h]
  __int64 v161; // [xsp+A0h] [xbp-1A0h]
  unsigned int v162; // [xsp+A0h] [xbp-1A0h]
  _OWORD *v163; // [xsp+120h] [xbp-120h]
  unsigned int *v164; // [xsp+128h] [xbp-118h]
  unsigned int v165; // [xsp+130h] [xbp-110h]
  __int128 v166; // [xsp+180h] [xbp-C0h]
  __int128 v167; // [xsp+190h] [xbp-B0h]
  __int128 v168; // [xsp+1A0h] [xbp-A0h]
  __int128 v169; // [xsp+1B0h] [xbp-90h]

  _ReadStatusReg(TPIDR_EL0);
  v2 = this;
  CPVRTModelPOD::Destroy(this);
  v4 = *((unsigned int *)a1 + 18);
  if ( (_DWORD)v4 )
    *((_QWORD *)v2 + 10) = calloc(96 * v4, 0x60u);
  v5 = *((unsigned int *)a1 + 19);
  if ( (_DWORD)v5 )
    *((_QWORD *)v2 + 8) = calloc(344 * v5, 0x158u);
  *((_DWORD *)v2 + 18) = v4;
  *((_DWORD *)v2 + 19) = v5;
  *((_DWORD *)v2 + 14) = v5;
  *((_DWORD *)v2 + 30) = 0;
  *((_DWORD *)v2 + 31) = *((_DWORD *)a1 + 31);
  *(_DWORD *)v2 = *(_DWORD *)a1;
  *((_DWORD *)v2 + 3) = *((_DWORD *)a1 + 3);
  *((_DWORD *)v2 + 1) = *((_DWORD *)a1 + 1);
  *((_DWORD *)v2 + 4) = *((_DWORD *)a1 + 4);
  *((_DWORD *)v2 + 2) = *((_DWORD *)a1 + 2);
  *((_DWORD *)v2 + 5) = *((_DWORD *)a1 + 5);
  v6 = *((_DWORD *)a1 + 19);
  if ( v6 )
  {
    v7 = 0;
    v147 = v2;
    v158 = a1;
    while ( 1 )
    {
      v8 = 96LL * v7;
      v9 = *((_QWORD *)a1 + 8);
      v10 = *(int *)(*((_QWORD *)a1 + 10) + v8);
      v164 = (unsigned int *)(v9 + 344 * v10);
      if ( *((_QWORD *)v164 + 29) )
      {
        CPVRTModelPOD::Destroy(v2);
        return 1;
      }
      v11 = *((_QWORD *)v2 + 10);
      v12 = *((_QWORD *)v2 + 8);
      v159 = *((_QWORD *)a1 + 10) + v8;
      v13 = (unsigned int *)(v11 + v8);
      PVRTModelPODCopyNode();
      v14 = v11 + 96LL * v7;
      v17 = *(void **)(v14 + 88);
      v16 = (_QWORD *)(v14 + 88);
      v15 = v17;
      *(_QWORD *)((char *)v16 - 68) = 0xFFFFFFFFLL;
      if ( v17 )
      {
        free(v15);
        *v16 = 0;
      }
      v18 = v11 + 96LL * v7;
      v21 = *(void **)(v18 + 40);
      v20 = (_QWORD *)(v18 + 40);
      v19 = v21;
      if ( v21 )
      {
        free(v19);
        *v20 = 0;
      }
      v22 = v11 + 96LL * v7;
      v25 = *(void **)(v22 + 56);
      v24 = (_QWORD *)(v22 + 56);
      v23 = v25;
      if ( v25 )
      {
        free(v23);
        *v24 = 0;
      }
      v26 = v11 + 96LL * v7;
      v29 = *(void **)(v26 + 72);
      v28 = (_QWORD *)(v26 + 72);
      v27 = v29;
      if ( v29 )
      {
        free(v27);
        *v28 = 0;
      }
      *v13 = v7;
      PVRTModelPODCopyMesh();
      v30 = v12 + 344LL * v7;
      v33 = *(void **)(v30 + 240);
      v32 = (_QWORD *)(v30 + 240);
      v31 = v33;
      if ( v33 )
        operator delete(v31);
      *v32 = 0;
      v34 = v12 + 344LL * v7;
      v37 = *(void **)(v34 + 248);
      v36 = (_QWORD *)(v34 + 248);
      v35 = v37;
      if ( v37 )
        operator delete(v35);
      *v36 = 0;
      v38 = v12 + 344LL * v7;
      v39 = *(void **)(v38 + 256);
      v40 = (_QWORD *)(v38 + 256);
      if ( v39 )
        operator delete(v39);
      *v40 = 0;
      v41 = v12 + 344LL * v7;
      v44 = *(void **)(v41 + 200);
      v43 = v41 + 200;
      v42 = v44;
      *(_DWORD *)(v43 + 68) = 0;
      *(_QWORD *)(v43 - 16) = 1;
      *(_DWORD *)(v43 - 8) = 0;
      if ( v44 )
      {
        free(v42);
        *(_QWORD *)v43 = 0;
      }
      v45 = v12 + 344LL * v7;
      v48 = *(void **)(v45 + 224);
      v47 = (_QWORD *)(v45 + 224);
      v46 = v48;
      *(v47 - 2) = 1;
      *((_DWORD *)v47 - 2) = 0;
      if ( v48 )
      {
        free(v46);
        *v47 = 0;
      }
      v49 = v9 + 344 * v10;
      v51 = *(_DWORD *)(v49 + 60);
      v50 = (_DWORD *)(v49 + 60);
      if ( v51 )
      {
        v52 = v12 + 344LL * v7;
        *(_DWORD *)(v52 + 56) = 1;
        *(_QWORD *)(v52 + 72) = realloc(*(void **)(v52 + 72), 4 * *(unsigned int *)(v52 + 60) * (unsigned __int64)*v164);
      }
      v160 = (_DWORD *)(v9 + 344 * v10 + 84);
      if ( *v160 )
      {
        v53 = v12 + 344LL * v7;
        *(_DWORD *)(v53 + 80) = 1;
        *(_QWORD *)(v53 + 96) = realloc(*(void **)(v53 + 96), 4 * *(unsigned int *)(v53 + 84) * (unsigned __int64)*v164);
      }
      v157 = (_DWORD *)(v9 + 344 * v10 + 108);
      if ( *v157 )
      {
        v54 = v12 + 344LL * v7;
        *(_DWORD *)(v54 + 104) = 1;
        *(_QWORD *)(v54 + 120) = realloc(
                                   *(void **)(v54 + 120),
                                   4 * *(unsigned int *)(v54 + 108) * (unsigned __int64)*v164);
      }
      v156 = (_DWORD *)(v9 + 344 * v10 + 132);
      if ( *v156 )
      {
        v55 = v12 + 344LL * v7;
        *(_DWORD *)(v55 + 128) = 1;
        *(_QWORD *)(v55 + 144) = realloc(
                                   *(void **)(v55 + 144),
                                   4 * *(unsigned int *)(v55 + 132) * (unsigned __int64)*v164);
      }
      v56 = v9 + 344 * v10;
      v148 = v7;
      if ( !*(_DWORD *)(v56 + 268) )
        break;
      v57 = v9 + 344 * v10;
      v58 = *(int *)(v57 + 264);
      v59 = (int *)(v57 + 264);
      if ( (_DWORD)v58 )
      {
        v60 = calloc(v58 << 6, 0x40u);
        v61 = *v59;
        v62 = v60;
        if ( (_DWORD)v61 )
          v63 = (char *)calloc(v61 << 6, 0x40u);
        else
          v63 = 0;
        v163 = v62;
      }
      else
      {
        v163 = 0;
        v62 = 0;
        v63 = 0;
      }
      p = v62;
      v66 = *v164;
      v153 = (_DWORD *)(v56 + 268);
      if ( (_DWORD)v66 )
        v67 = calloc(v66, 1u);
      else
        v67 = 0;
      LODWORD(v68) = *v153;
      if ( *v153 )
      {
        v69 = v9 + 344 * v10;
        v70 = 0;
        v152 = (_QWORD *)(v69 + 248);
        v151 = (_QWORD *)(v69 + 256);
        v150 = (_DWORD *)(v69 + 48);
        v149 = (int *)(v69 + 4);
        v71 = 0;
        v72 = 0;
        v73 = (_QWORD *)(v69 + 32);
        v74 = (__int64 *)(v69 + 40);
        while ( 1 )
        {
          v161 = *(unsigned int *)(*v152 + 4 * v71);
          if ( (_DWORD)v161 )
          {
            v154 = v70;
            v75 = v163;
            v76 = 0;
            v77 = v63;
            do
            {
              v78 = v71;
              CPVRTModelPOD::GetBoneWorldMatrix();
              if ( *v160 || *v157 || *v156 )
              {
                *((_OWORD *)v77 + 1) = v75[1];
                *(_OWORD *)v77 = *v75;
                *((_OWORD *)v77 + 3) = v75[3];
                v79 = v75[2];
                *((_DWORD *)v77 + 7) = 0;
                *((_DWORD *)v77 + 3) = 0;
                *(_QWORD *)(v77 + 52) = 0;
                *((_OWORD *)v77 + 2) = v79;
                *(_QWORD *)(v77 + 44) = 0;
                PVRTMatrixInverseF();
                PVRTMatrixTransposeF();
              }
              ++v76;
              v75 += 4;
              v77 += 64;
              v71 = v78;
            }
            while ( v161 != v76 );
            v70 = v154;
            LODWORD(v68) = *v153;
          }
          v80 = v71 + 1 >= (unsigned int)v68;
          v155 = v71 + 1;
          v81 = (int *)(*v151 + 4 * (v71 + 1));
          v82 = *(_DWORD *)(*v151 + 4 * v71);
          if ( v80 )
            v81 = v149;
          v83 = *v81;
          if ( !*v150 )
            break;
          v162 = v83 - v82;
          if ( v83 != v82 )
          {
            v84 = *v74;
            v85 = 0;
            while ( 1 )
            {
              v86 = *(_DWORD *)(v84 + 4LL * v70);
              v87 = v72 + 2;
              v88 = v72 + 2 + v86;
              if ( v72 < v88 )
                break;
LABEL_70:
              v85 += v86;
              v72 = v88;
              ++v70;
              if ( v85 >= v162 )
                goto LABEL_80;
            }
            while ( 1 )
            {
              if ( *v73 )
              {
                PVRTVertexRead();
                if ( !v67[v165] )
                {
LABEL_68:
                  PVRTVertexRead();
                  PVRTVertexRead();
                  TransformCPODData();
                  TransformCPODData();
                  TransformCPODData();
                  TransformCPODData();
                  v67[v165] = 1;
                }
              }
              else
              {
                v165 = v72;
                if ( !v67[v72] )
                  goto LABEL_68;
              }
              v84 = *v74;
              ++v72;
              v86 = *(_DWORD *)(*v74 + 4LL * v70);
              v88 = v87 + v86;
              if ( v72 >= v87 + v86 )
                goto LABEL_70;
            }
          }
LABEL_80:
          v68 = (unsigned int)*v153;
          v71 = v155;
          if ( v155 >= v68 )
            goto LABEL_81;
        }
        v72 = 3 * v82;
        v89 = 3 * v83;
        if ( 3 * v82 >= (unsigned int)(3 * v83) )
          goto LABEL_80;
        v90 = 3 * v82;
        while ( 2 )
        {
          if ( *v73 )
          {
            PVRTVertexRead();
            if ( !v67[v165] )
              goto LABEL_78;
          }
          else
          {
            v165 = v90;
            if ( !v67[v90] )
            {
LABEL_78:
              PVRTVertexRead();
              PVRTVertexRead();
              TransformCPODData();
              TransformCPODData();
              TransformCPODData();
              TransformCPODData();
              v67[v165] = 1;
            }
          }
          if ( v89 == ++v90 )
            goto LABEL_80;
          continue;
        }
      }
LABEL_81:
      if ( v163 )
        free(p);
      a1 = v158;
      if ( v63 )
        free(v63);
      if ( v67 )
        free(v67);
LABEL_100:
      v6 = *((_DWORD *)a1 + 19);
      v2 = v147;
      v7 = v148 + 1;
      if ( v148 + 1 >= v6 )
        goto LABEL_104;
    }
    v64 = *((_QWORD *)a1 + 16);
    if ( *(float *)v64 == 0.0 )
    {
      v65 = (__int128 *)(*(_QWORD *)(v64 + 32)
                       + ((unsigned __int64)(-1431655765 * (unsigned int)((v159 - *((_QWORD *)a1 + 10)) >> 5)) << 6));
    }
    else
    {
      v91 = -1431655765 * (unsigned int)((v159 - *((_QWORD *)a1 + 10)) >> 5);
      if ( *(float *)v64 != *(float *)(*(_QWORD *)(v64 + 16) + 4 * v91) )
      {
        CPVRTModelPOD::GetWorldMatrixNoCache();
        v93 = *((_QWORD *)a1 + 16);
        *(_DWORD *)(*(_QWORD *)(v93 + 16) + 4 * v91) = *(_DWORD *)v93;
        v94 = (_OWORD *)(*(_QWORD *)(v93 + 24) + (v91 << 6));
        v94[3] = v169;
        v94[2] = v168;
        v94[1] = v167;
        *v94 = v166;
LABEL_90:
        if ( *v160 || *v157 || *v156 )
        {
          PVRTMatrixInverseF();
          PVRTMatrixTransposeF();
        }
        if ( *v164 )
        {
          v92 = 0;
          do
          {
            if ( *v50 )
            {
              PVRTVertexRead();
              PVRTVertexWrite();
            }
            TransformCPODData();
            TransformCPODData();
            TransformCPODData();
            ++v92;
          }
          while ( v92 < *v164 );
        }
        a1 = v158;
        goto LABEL_100;
      }
      v65 = (__int128 *)(*(_QWORD *)(v64 + 24) + (v91 << 6));
    }
    v169 = v65[3];
    v168 = v65[2];
    v167 = v65[1];
    v166 = *v65;
    goto LABEL_90;
  }
LABEL_104:
  if ( v6 < *((_DWORD *)a1 + 18) )
  {
    v96 = v6;
    v97 = (unsigned __int64)v6 << 6;
    v98 = 96LL * v6;
    while ( 1 )
    {
      PVRTModelPODCopyNode();
      v101 = *((_QWORD *)v2 + 10);
      v102 = *(void **)(v101 + v98 + 88);
      *(_QWORD *)(v101 + v98 + 20) = 0xFFFFFFFFLL;
      if ( v102 )
      {
        free(v102);
        v101 = *((_QWORD *)v2 + 10);
        *(_QWORD *)(v101 + v98 + 88) = 0;
      }
      v103 = *(void **)(v101 + v98 + 80);
      if ( v103 )
      {
        free(v103);
        v101 = *((_QWORD *)v2 + 10);
        *(_QWORD *)(v101 + v98 + 80) = 0;
      }
      v104 = *(void **)(v101 + v98 + 40);
      if ( v104 )
      {
        free(v104);
        v101 = *((_QWORD *)v2 + 10);
        *(_QWORD *)(v101 + v98 + 40) = 0;
      }
      v105 = *(void **)(v101 + v98 + 32);
      if ( v105 )
      {
        free(v105);
        v101 = *((_QWORD *)v2 + 10);
        *(_QWORD *)(v101 + v98 + 32) = 0;
      }
      v106 = *(void **)(v101 + v98 + 56);
      if ( v106 )
      {
        free(v106);
        v101 = *((_QWORD *)v2 + 10);
        *(_QWORD *)(v101 + v98 + 56) = 0;
      }
      v107 = *(void **)(v101 + v98 + 48);
      if ( v107 )
      {
        free(v107);
        v101 = *((_QWORD *)v2 + 10);
        *(_QWORD *)(v101 + v98 + 48) = 0;
      }
      v108 = *(void **)(v101 + v98 + 72);
      if ( v108 )
      {
        free(v108);
        v101 = *((_QWORD *)v2 + 10);
        *(_QWORD *)(v101 + v98 + 72) = 0;
      }
      v109 = *(void **)(v101 + v98 + 64);
      if ( v109 )
      {
        free(v109);
        v101 = *((_QWORD *)v2 + 10);
        *(_QWORD *)(v101 + v98 + 64) = 0;
      }
      v110 = *((_QWORD *)a1 + 16);
      if ( *(float *)v110 == 0.0 )
        break;
      if ( *(float *)v110 == *(float *)(*(_QWORD *)(v110 + 16) + 4 * v96) )
      {
        v111 = *(_QWORD *)(v110 + 24);
        goto LABEL_127;
      }
      CPVRTModelPOD::GetWorldMatrixNoCache();
      v99 = *((_QWORD *)a1 + 16);
      *(_DWORD *)(*(_QWORD *)(v99 + 16) + 4 * v96) = *(_DWORD *)v99;
      v100 = (_OWORD *)(*(_QWORD *)(v99 + 24) + v97);
      v100[3] = v169;
      v100[2] = v168;
      v100[1] = v167;
      *v100 = v166;
      v101 = *((_QWORD *)v2 + 10);
LABEL_128:
      v113 = calloc(0x40u, 4u);
      *(_QWORD *)(v101 + v98 + 88) = v113;
      if ( v113 )
      {
        v114 = *(_OWORD **)(*((_QWORD *)v2 + 10) + v98 + 88);
        v114[3] = v169;
        v114[2] = v168;
        v114[1] = v167;
        *v114 = v166;
      }
      ++v96;
      v98 += 96;
      v97 += 64LL;
      if ( v96 >= *((unsigned int *)a1 + 18) )
        goto LABEL_131;
    }
    v111 = *(_QWORD *)(v110 + 32);
LABEL_127:
    v112 = (__int128 *)(v111 + v97);
    v169 = v112[3];
    v168 = v112[2];
    v167 = v112[1];
    v166 = *v112;
    goto LABEL_128;
  }
LABEL_131:
  v115 = *((unsigned int *)a1 + 6);
  if ( (_DWORD)v115 )
  {
    v116 = (char *)calloc(24 * v115, 0x18u);
    *((_QWORD *)v2 + 4) = v116;
    if ( v116 )
    {
      *((_DWORD *)v2 + 6) = v115;
      if ( *((_DWORD *)a1 + 6) )
      {
        v117 = 0;
        for ( i = 1; ; ++i )
        {
          v119 = *((_QWORD *)a1 + 4);
          v120 = &v116[v117];
          v121 = *((int *)a1 + 30);
          v122 = *(_OWORD *)(v119 + v117);
          *((_QWORD *)v120 + 2) = 0;
          *(_OWORD *)v120 = v122;
          v123 = *(const void **)(v119 + v117 + 16);
          if ( !v123 )
            goto LABEL_142;
          v124 = 4 * v121;
          if ( (_DWORD)v121 )
          {
            v125 = calloc(4 * v121, 4u);
            *(_QWORD *)&v116[v117 + 16] = v125;
            if ( !v125 )
              goto LABEL_142;
            v123 = *(const void **)(v119 + v117 + 16);
          }
          else
          {
            v125 = 0;
          }
          memcpy(v125, v123, v124);
LABEL_142:
          if ( i >= *((unsigned int *)a1 + 6) )
            break;
          v116 = (char *)*((_QWORD *)v2 + 4);
          v117 += 24;
        }
      }
    }
  }
  v126 = *((unsigned int *)a1 + 10);
  if ( (_DWORD)v126 )
  {
    v127 = calloc(40 * v126, 0x28u);
    *((_QWORD *)v2 + 6) = v127;
    if ( v127 )
    {
      *((_DWORD *)v2 + 10) = v126;
      v128 = *((_QWORD *)a1 + 6);
      v127[4] = *(_QWORD *)(v128 + 32);
      *((_OWORD *)v127 + 1) = *(_OWORD *)(v128 + 16);
      *(_OWORD *)v127 = *(_OWORD *)v128;
      if ( (unsigned int)v126 >= 2 )
      {
        v129 = 1;
        v130 = 40;
        do
        {
          ++v129;
          v131 = *((_QWORD *)a1 + 6) + v130;
          v132 = *((_QWORD *)v2 + 6) + v130;
          v130 += 40;
          *(_QWORD *)(v132 + 32) = *(_QWORD *)(v131 + 32);
          *(_OWORD *)(v132 + 16) = *(_OWORD *)(v131 + 16);
          *(_OWORD *)v132 = *(_OWORD *)v131;
        }
        while ( v129 < *((unsigned int *)v2 + 10) );
      }
    }
  }
  v133 = *((unsigned int *)a1 + 22);
  if ( (_DWORD)v133 )
  {
    v134 = calloc(8 * v133, 8u);
    *((_QWORD *)v2 + 12) = v134;
    if ( v134 )
    {
      v135 = 0;
      *((_DWORD *)v2 + 22) = v133;
      do
      {
        v136 = *((_QWORD *)a1 + 12);
        v137 = *(const char **)(v136 + 8 * v135);
        if ( v137 )
        {
          v138 = *((_QWORD *)v2 + 12);
          v139 = strlen(*(const char **)(v136 + 8 * v135)) + 1;
          if ( !v139 )
          {
            v140 = *(void **)(v138 + 8 * v135);
            goto LABEL_156;
          }
          v140 = calloc(v139, 1u);
          *(_QWORD *)(v138 + 8 * v135) = v140;
          if ( v140 )
          {
            v137 = *(const char **)(v136 + 8 * v135);
LABEL_156:
            v141 = strlen(v137);
            memcpy(v140, v137, v141 + 1);
            LODWORD(v133) = *((_DWORD *)v2 + 22);
          }
        }
        ++v135;
      }
      while ( v135 < (unsigned int)v133 );
    }
  }
  v142 = *((unsigned int *)a1 + 26);
  if ( (_DWORD)v142 )
  {
    v143 = calloc(176 * v142, 0xB0u);
    *((_QWORD *)v2 + 14) = v143;
    if ( v143 )
    {
      *((_DWORD *)v2 + 26) = v142;
      if ( *((_DWORD *)a1 + 26) )
      {
        PVRTModelPODCopyMaterial(*((void **)a1 + 14), v143);
        if ( *((_DWORD *)a1 + 26) >= 2u )
        {
          v144 = 1;
          v145 = 176;
          do
          {
            PVRTModelPODCopyMaterial((void *)(*((_QWORD *)a1 + 14) + v145), (void *)(*((_QWORD *)v2 + 14) + v145));
            ++v144;
            v145 += 176;
          }
          while ( v144 < *((unsigned int *)a1 + 26) );
        }
      }
    }
  }
  CPVRTModelPOD::InitImpl(v2);
  return 0;
}

