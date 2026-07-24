/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0057d748
 * Function: Caver::SHA1HashForString
 * Signature: undefined __cdecl SHA1HashForString(string * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SHA1HashForString(std::string const&) */

void Caver::SHA1HashForString(string *param_1)

{
  SHA1HashForBytes(*(uchar **)param_1,*(ulong *)(*(uchar **)param_1 + -0x18));
  return;
}


