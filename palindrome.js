function palindrome(str) {

  var palchk = str.toLowerCase();
  var lowerpal = palchk.replace(/\s/g,'').replace(/[^0-9a-z]/gi,'');
  var length = lowerpal.length;

    //Two conditions for odd and even lengths
//--------------------------------------------
  if(length % 2 != 0){
    for(var i=0; i<((length-1)/2); i++){
      if(lowerpal[i] === lowerpal[(length-1)-i]){
        continue;
      }
      else{
        return false;
      }
    }
    return true;
  }
  else if(length % 2 == 0){
    for(var i=0; i<(length/2); i++){
      if(lowerpal[i] === lowerpal[(length-1)-i]){
        continue;
      }
      else{
        return false;
      }
    }
    return true;
  }
  
//------------------------------------------------


  
}


palindrome("eye");