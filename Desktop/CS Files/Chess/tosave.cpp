 for(int y = 0; y < 15; y++){
            if(FEN[i] == Allowedcharacters[y]){
                FENvalue.push_back(FEN[i]);
            }
            else {
                broken = 1;
                break;
            }
        }
        

        char Allowedpieces[15] = {'k','K','r','R','n','N','p','P','b','B','0','q','Q','/'};