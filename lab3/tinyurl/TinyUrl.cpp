//
// Created by ficon on 13.03.18.
//

#include "TinyUrl.h"
#include <utility>
#include <string>
#include <array>
#include <memory>
#include <string>

namespace tinyurl{

    struct TinyUrlCodec{
        std::array<char, 6> state;
        std::string url;
    };

    std::unique_ptr<TinyUrlCodec> Init();


    void NextHash(std::array<char, 6> *state) {
        for (int i = 5; 1>=0; i--) {
            if((*state)[i] == '9'){
                (*state)[i] = 'A';
                break;
            }
            else if((*state)[i]=='Z'){
                (*state)[i] = 'a';
                break;

            }
            else if((*state)[i]=='z'){
                (*state)[i] = '0';

            }
            else{
                ((*state)[i])++;
                break;
            }
        }
    }



    std::string Encode(const std::string &url, std::unique_ptr<TinyUrlCodec> codec) {
        codec = std::make_unique<TinyUrlCodec>();
        codec->state;

    }

    std::string Decode(const std::unique_ptr<TinyUrlCodec> &codec, const std::string &hash) {

    }
}