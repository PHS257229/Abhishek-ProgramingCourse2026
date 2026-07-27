! ============================================================
! L1 - Introduction to Programming
! Topic : Writing, Compiling and Executing a Program
! Language : Fortran 90
! ============================================================

! Every Fortran program starts with the 'program' keyword
! followed by a name you choose
program hello

  ! 'implicit none' forces us to declare all variables
  ! This is good practice - always include it
  implicit none

  ! 'print *' prints to the screen
  ! The '*' means default formatting
  ! Text must be enclosed in double quotes
  print *, "Hello, World!"

  ! Every program must end with 'end program'
  ! followed by the same name used at the top
end program hello

! ============================================================
! HOW TO COMPILE AND RUN:
!   gfortran hello.f90 -o hello
!   ./hello
! ============================================================
