import axios from 'axios';
const querystring = require('querystring');

const api = axios.create();

api({
    url: `${HOST}/vue/server/home.php?inAjax=1&do=getHomeImage`,
    method: 'POST',
    data: querystring.stringify({ index }),
    headers: {
        'Content-Type': 'application/x-www-form-urlencoded'
    }
});
