/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 002fa0f0
 * Function: <EXTERNAL>::poll
 * Signature: int poll(pollfd * __fds, nfds_t __nfds, int __timeout)
 * Thunk: true
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int poll(pollfd *__fds,nfds_t __nfds,int __timeout)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_poll_007df8a8)((int)__fds,__nfds,__timeout);
  return iVar1;
}


