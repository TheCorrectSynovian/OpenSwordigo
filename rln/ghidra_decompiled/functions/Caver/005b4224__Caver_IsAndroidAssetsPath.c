/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005b4224
 * Function: Caver::IsAndroidAssetsPath
 * Signature: undefined __cdecl IsAndroidAssetsPath(string * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::IsAndroidAssetsPath(std::string const&) */

bool Caver::IsAndroidAssetsPath(string *param_1)

{
  int iVar1;
  
                    /* try { // try from 005b4234 to 006b423f has its CatchHandler @ 005b3e64 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 005b420c with catch @ 005b423c
                        */
  iVar1 = FUN_0066887c(param_1,0,*(undefined8 *)(DAT_007e9f60 + -0x18));
                    /* catch() { ... } // from try @ 005b42a4 with catch @ 005b4244 */
  return iVar1 == 0;
}


