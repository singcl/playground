# @flow
###::
type Obj = {
    num: number
};
###

fn = (str ###: string ###, obj ###: Obj ###) ###: string ### ->
  str + obj.num

console.log fn 'singcl', {num: 2}